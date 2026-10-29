void __fastcall sub_EE6F50(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  _BYTE *v8; // rax
  char *v9; // rax
  size_t v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE *v14; // rdx
  char *v15; // rsi
  __int64 v16; // rcx
  int v17; // [rsp+0h] [rbp-38h] BYREF
  char *v18; // [rsp+8h] [rbp-30h]
  char *v19; // [rsp+10h] [rbp-28h]

  sub_C6FDE0((__int64)&v17, a2);
  if ( v18 )
    sub_EE16F0(a1, v18, v3, v4, v5, v6, a3);
  else
    sub_EE0C80(a1);
  v7 = *a1;
  v8 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(*a1 + 24) )
  {
    v7 = sub_2257CD0(*a1, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v8 + 1;
    *v8 = 32;
  }
  v9 = sub_BD69E0(v17);
  v11 = sub_9717A0(v7, v9, v10);
  v14 = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v11 + 24) )
  {
    sub_2257CD0(v11, 32);
    v15 = v19;
    if ( v19 )
      goto LABEL_7;
  }
  else
  {
    v15 = v19;
    v16 = (__int64)(v14 + 1);
    *(_QWORD *)(v11 + 32) = v14 + 1;
    *v14 = 32;
    if ( v15 )
    {
LABEL_7:
      sub_EE16F0(a1, v15, (__int64)v14, v16, v12, v13, a3);
      return;
    }
  }
  sub_EE0C80(a1);
}

