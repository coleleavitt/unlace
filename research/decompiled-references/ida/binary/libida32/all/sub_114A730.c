__int64 __fastcall sub_114A730(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r14
  size_t v9; // rdx
  size_t v10; // rbp
  size_t v11; // rax
  _BYTE *v12; // rsi
  _BYTE *v13; // rdx
  _BYTE *v14; // rdi
  __int64 v16; // rdx
  size_t v17; // rdx
  __int64 v18; // rdx
  void *v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+8h] [rbp-40h]
  _BYTE v21[56]; // [rsp+10h] [rbp-38h] BYREF

  v4 = (_BYTE *)sub_2266770(a2, a3, 0);
  v6 = v5;
  v7 = sub_2266D20(v4, v5, 0);
  v8 = (_DWORD *)v7;
  v10 = v9;
  if ( v9 == 3 )
  {
    if ( *(_WORD *)v7 != 26978 || *(_BYTE *)(v7 + 2) != 110 )
      goto LABEL_3;
    v4 = (_BYTE *)sub_2266770(v4, v6, 0);
    v6 = v16;
    v8 = (_DWORD *)sub_2266D20(v4, v16, 0);
    v10 = v17;
  }
  if ( v10 == 4 && *v8 == 1836477548 )
  {
LABEL_13:
    v4 = (_BYTE *)sub_2266770(v4, v6, 0);
    v6 = v18;
    if ( !v4 )
      goto LABEL_14;
LABEL_5:
    v19 = v21;
    sub_1148360(&v19, v4, (__int64)&v4[v6]);
    v12 = v19;
    v13 = (char *)v19 + v20;
    goto LABEL_6;
  }
LABEL_3:
  v11 = j__strlen("aomp");
  if ( v11 <= v10 && (!v11 || !memcmp(v8, "aomp", v11)) )
    goto LABEL_13;
  if ( v4 )
    goto LABEL_5;
LABEL_14:
  v13 = v21;
  v21[0] = 0;
  v19 = v21;
  v12 = v21;
  v20 = 0;
LABEL_6:
  *(_QWORD *)a1 = a1 + 24;
  *(_OWORD *)(a1 + 8) = 0;
  sub_9FC110((_QWORD *)a1, v12, v13);
  v14 = v19;
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  if ( v14 != v21 )
    operator delete(v14);
  return a1;
}

