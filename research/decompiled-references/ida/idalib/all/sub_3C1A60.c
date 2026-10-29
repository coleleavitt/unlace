__int64 __fastcall sub_3C1A60(
        __int64 a1,
        int *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 v16; // rbp
  char v18; // al
  __int64 v19; // rdi
  int *v20; // rsi
  char *v21; // rax
  char *v22; // r15
  unsigned __int64 v23; // rax
  __int64 v25; // rdi
  int *v26; // rsi
  _QWORD *v27; // rax
  int *v28; // [rsp+0h] [rbp-58h]
  int v29[2]; // [rsp+8h] [rbp-50h]
  int v30[2]; // [rsp+10h] [rbp-48h] BYREF
  void *v31; // [rsp+18h] [rbp-40h]
  __int64 v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+28h] [rbp-30h]
  int v34; // [rsp+30h] [rbp-28h]
  int v35; // [rsp+38h] [rbp-20h]
  __int64 v36; // [rsp+40h] [rbp-18h]

  v16 = a1 + 1704;
  v31 = (void *)__readfsqword(0x28u);
  v28 = v30;
  while ( 1 )
  {
    v19 = v16;
    v20 = (int *)(unsigned int)sub_503F40(v16, a2);
    v21 = (char *)sub_505DE0(v16, v20);
    v22 = v21;
    if ( !v21 )
      break;
    v23 = *(_QWORD *)v21;
    if ( v23 >= a3 )
      break;
    if ( *(_QWORD *)(a4 + 16) )
    {
      *(_QWORD *)v30 = v23;
      v20 = v28;
      v19 = a4;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, int *))(a4 + 24))(a4, v28) )
        return 0;
    }
    if ( (get_merge_state(v19, v20) & 2) != 0 )
    {
      v18 = sub_5D4820(a1);
      goto LABEL_3;
    }
    if ( v22[17] < 0 )
    {
      *(_QWORD *)v29 = *(_QWORD *)v22;
      sub_5CAA10(a1);
      v18 = sub_5CE7C0(a1);
LABEL_3:
      if ( !v18 )
        return 0;
    }
    else if ( !(unsigned __int8)sub_5D4180(a1, (__int64)v28, v29[0], v30[0], v31, v32, v33, v34, v35, v36) )
    {
      return 0;
    }
  }
  v25 = v16;
  v26 = a2;
  v27 = (_QWORD *)sub_505D70(v16, a2);
  if ( !v27 || v27[1] >= a3 )
    return 1;
  if ( *(_QWORD *)(a4 + 16) )
  {
    v26 = v30;
    v25 = a4;
    *(_QWORD *)v30 = *v27;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, int *))(a4 + 24))(a4, v30) )
      return 0;
  }
  if ( (get_merge_state(v25, v26) & 2) != 0 )
    return sub_5D4820(a1);
  else
    return sub_5CDC30(a1, a7, a8, a9, a10, a11, a12, a13);
}
