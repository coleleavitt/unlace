__int64 __fastcall sub_1A030(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  char *v9; // r15
  size_t v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  result = 0;
  if ( (_WORD)a2 == (_WORD)a3 )
    return result;
  v5 = (unsigned int)(a2 << 16);
  v6 = (unsigned int)(a3 << 16);
  v7 = netnode_altval(*(_QWORD *)(a1 + 33336), v5, 65);
  if ( !v7 || (v8 = netnode_altval(*(_QWORD *)(a1 + 33336), v6, 65)) == 0 )
LABEL_9:
    sub_E6A0();
  if ( v7 != v8 )
    return 1;
  result = 0xFFFFFFFFLL;
  if ( (_WORD)v7 )
  {
    if ( *(_WORD *)(a1 + 33111) >= (unsigned __int16)v7 )
    {
      v9 = *(char **)(a1 + 33352);
      v10 = 2LL * (unsigned __int16)v7;
      v11 = *(_QWORD *)(a1 + 33336);
      v12 = *(_QWORD *)(a1 + 33352);
      v14[0] = v10 + 1;
      if ( netnode_getblob(v11, v12, v14, v5, 106) )
      {
        if ( v10 == LODWORD(v14[0]) && *(_WORD *)(a1 + 33111) >= (unsigned __int16)v7 )
        {
          v13 = *(_QWORD *)(a1 + 33336);
          v14[0] = v10 + 1;
          if ( netnode_getblob(v13, &v9[v10], v14, v6, 106) )
          {
            if ( v10 == LODWORD(v14[0]) )
              return memcmp(v9, &v9[v10], v10) != 0;
          }
        }
      }
    }
    goto LABEL_9;
  }
  return result;
}
