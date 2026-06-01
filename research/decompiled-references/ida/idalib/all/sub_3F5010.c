__int64 __fastcall sub_3F5010(_QWORD *a1, __int64 a2, int a3, __int64 a4, char *a5, __int64 a6, char **a7)
{
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v16; // rdx
  __int64 v17; // rsi
  char v18; // al
  char v19; // [rsp+1Fh] [rbp-39h] BYREF
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v12 = (_QWORD *)a1[8];
  v13 = a1[9];
  v20[1] = __readfsqword(0x28u);
  v14 = &v12[v13];
  if ( v12 != v14 )
  {
    while ( *v12 != a2 )
    {
      if ( v14 == ++v12 )
        goto LABEL_7;
    }
    if ( v14 != v12 )
      return 0;
  }
LABEL_7:
  if ( (unsigned __int8)(a3 - 68) > 0x34u )
    return 0;
  v16 = 0x10000100100001LL;
  if ( !_bittest64(&v16, (unsigned int)(a3 - 68)) )
    return 0;
  if ( a6 != 1 )
  {
    node2ea(a2);
    sub_35A790(a7);
    return 0;
  }
  v17 = a1[3];
  v18 = *a5;
  v20[0] = a2;
  v19 = v18;
  sub_7BE7C0(v20, v17, a4, &v19, 1, (unsigned __int8)a3);
  sub_4118B0(*(_QWORD *)(a1[3] + 1672LL), (unsigned __int8)a3, a2, a4, a5, 1);
  return 1;
}
