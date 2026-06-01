__int64 __fastcall sub_3BCAD0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
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
  unsigned __int64 v20; // rsi
  char *v21; // rax
  char *v22; // r15
  unsigned int v23; // eax
  __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  int *v27; // rax
  int *v28; // [rsp+0h] [rbp-58h]
  int v29; // [rsp+8h] [rbp-50h]
  int v30; // [rsp+10h] [rbp-48h]
  unsigned int v31; // [rsp+14h] [rbp-44h] BYREF
  void *v32; // [rsp+18h] [rbp-40h]
  __int64 v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+28h] [rbp-30h]
  __int64 v35; // [rsp+30h] [rbp-28h]

  v16 = a1 + 1624;
  v32 = (void *)__readfsqword(0x28u);
  v28 = (int *)&v31;
  while ( 1 )
  {
    v19 = v16;
    v20 = (unsigned int)sub_4ECA50(v16, a2);
    v21 = (char *)sub_4EE890(v16, v20);
    v22 = v21;
    if ( !v21 )
      break;
    v23 = *(_DWORD *)v21;
    if ( v23 >= a3 )
      break;
    if ( *(_QWORD *)(a4 + 16) )
    {
      v31 = v23;
      v20 = (unsigned __int64)v28;
      v19 = a4;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, int *))(a4 + 24))(a4, v28) )
        return 0;
    }
    if ( (get_merge_state(v19, v20) & 2) != 0 )
    {
      v18 = sub_5B96C0(a1);
      goto LABEL_3;
    }
    if ( v22[9] < 0 )
    {
      sub_5AFCE0(a1);
      v18 = sub_5B37D0(a1);
LABEL_3:
      if ( !v18 )
        return 0;
    }
    else if ( !(unsigned __int8)sub_5B9040(a1, (__int64)v28, v29, v30, v32, v33, v34, v35) )
    {
      return 0;
    }
  }
  v25 = v16;
  v26 = a2;
  v27 = (int *)sub_4EE820(v16, a2);
  if ( !v27 || v27[1] >= a3 )
    return 1;
  if ( *(_QWORD *)(a4 + 16) )
  {
    v26 = (unsigned __int64)&v31;
    v25 = a4;
    v31 = *v27;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(a4 + 24))(a4, &v31) )
      return 0;
  }
  if ( (get_merge_state(v25, v26) & 2) != 0 )
    return sub_5B96C0(a1);
  else
    return sub_5B2CC0(a1, a7, a8, a9, a10, a11, a12, a13);
}

