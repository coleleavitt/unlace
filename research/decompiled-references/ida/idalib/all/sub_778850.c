__int64 __fastcall sub_778850(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  char *v3; // r12
  unsigned __int64 v4; // rbx
  void *v5; // rax
  char v6; // dl
  void *v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 v14; // rdx
  int v15[2]; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+16h] [rbp-32h] BYREF
  char v17; // [rsp+1Eh] [rbp-2Ah]
  void *v18; // [rsp+1Fh] [rbp-29h]
  char v19; // [rsp+27h] [rbp-21h]
  int v20[2]; // [rsp+28h] [rbp-20h]

  *(_QWORD *)v15 = a2;
  *(_QWORD *)v20 = __readfsqword(0x28u);
  v17 = 0;
  ptr = (void *)-1LL;
  v2 = sub_778480(a1, (const char **)v15);
  if ( v2 == -1 )
    return -1;
  v3 = *(char **)v15;
  v4 = v2;
  v5 = (void *)sub_777000(a1, v2, *(char **)v15);
  v18 = v5;
  v7 = v5;
  v19 = v6;
  if ( v5 == (void *)-1LL )
    return -1;
  ptr = v5;
  v17 = v6;
  if ( !v4 && !*v3 )
    return -1;
  if ( v4 < *(_QWORD *)(a1 + 56) )
  {
    v8 = *(_QWORD *)(a1 + 48) + 176 * v4;
    v9 = *(_QWORD *)(v8 + 32);
    v10 = *(_QWORD *)(v8 + 24);
    v11 = v10 + 9 * v9;
    if ( (*(_BYTE *)(v8 + 168) & 4) != 0 )
    {
      if ( v17 )
      {
        v14 = *(_QWORD *)(v8 + 24);
        if ( v9 )
        {
          do
          {
            if ( !*(_BYTE *)(v14 + 8) )
              break;
            if ( v7 == *(void **)v14 )
              break;
            v14 += 9;
          }
          while ( v11 != v14 );
        }
      }
      else
      {
        sub_773990(v10, v10 + 9 * v9, (__int64)&ptr);
      }
    }
    else if ( v11 != v10 )
    {
      v12 = *(_QWORD *)(v8 + 24);
      do
      {
        if ( v7 == *(void **)v12 && v17 == *(_BYTE *)(v12 + 8) )
          break;
        v12 += 9;
      }
      while ( v11 != v12 );
    }
  }
  return v4;
}
