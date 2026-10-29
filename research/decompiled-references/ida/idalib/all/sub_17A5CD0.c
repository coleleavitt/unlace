__int64 __fastcall sub_17A5CD0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // rdx
  __int64 *v6; // rax

  v2 = *(_DWORD **)a2;
  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 4LL) & 0x30) == 0 )
  {
    if ( (*v2 & 0x7F000) == 0x34000 || (*v2 & 0x7E000) == (_DWORD)&stru_32000 )
    {
      v4 = *(_DWORD *)(a2 + 136);
      result = 0;
      if ( v4 )
      {
        v5 = *(_QWORD *)(a2 + 128) + 144LL * (unsigned int)(v4 - 1);
        if ( *(_DWORD *)v5 == 3 && (*(_BYTE *)(v5 + 57) & 2) != 0 )
        {
          v6 = (__int64 *)(sub_1E5F010(*(_QWORD *)(v5 + 128), 0) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v6 )
            return (unsigned int)sub_179FCB0(*v6) ^ 1;
          else
            return 1;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
