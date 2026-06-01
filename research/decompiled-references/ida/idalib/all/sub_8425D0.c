unsigned __int64 __fastcall sub_8425D0(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 *v2; // rbx
  __pid_t v3; // edi
  __pid_t v4; // eax
  int stat_loc; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v1 = (__int64 *)(a1 + 24);
  v7 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 24);
  if ( v2 != (__int64 *)(a1 + 24) )
  {
    do
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)v2 + 40) )
        {
          v3 = *((_DWORD *)v2 + 4);
          if ( v3 != -1 )
            break;
        }
LABEL_5:
        v2 = (__int64 *)*v2;
        if ( v2 == v1 )
          return v7 - __readfsqword(0x28u);
      }
      v4 = waitpid(v3, &stat_loc, *((_DWORD *)v2 + 7) | 1);
      if ( !v4 )
      {
        if ( *((_BYTE *)v2 + 41) )
        {
          *((_BYTE *)v2 + 41) = 0;
          qsem_post(v2[4]);
        }
        goto LABEL_5;
      }
      if ( v4 <= 0 )
      {
        if ( v4 == -1 && *__errno_location() == 10 )
          *((_BYTE *)v2 + 24) = 1;
      }
      else
      {
        *((_DWORD *)v2 + 5) = stat_loc;
      }
      *((_BYTE *)v2 + 40) = 1;
      qsem_post(v2[4]);
      v2 = (__int64 *)*v2;
    }
    while ( v2 != v1 );
  }
  return v7 - __readfsqword(0x28u);
}
