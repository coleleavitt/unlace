__int64 __fastcall sub_B7C4D0(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r12
  void *v5; // rdi
  unsigned int v6; // ebp
  void *v7; // rbx
  void *v8; // rbx
  bool v10; // al
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  bool v13; // dl
  int v14; // [rsp+10h] [rbp-78h] BYREF
  char v15; // [rsp+14h] [rbp-74h]
  int v16; // [rsp+20h] [rbp-68h] BYREF
  char v17; // [rsp+24h] [rbp-64h]
  int v18; // [rsp+30h] [rbp-58h] BYREF
  char v19; // [rsp+34h] [rbp-54h]
  int v20; // [rsp+40h] [rbp-48h] BYREF
  char v21; // [rsp+44h] [rbp-44h]

  v3 = a3;
  sub_B7BFB0((__int64)&v18, *a1, a3);
  sub_B7BFB0((__int64)&v14, *a1, a2);
  v5 = qword_1C7F2C0;
  if ( (v15 & 1) != 0 || (v19 & 1) != 0 )
  {
    v5 = qword_1C7F2C0;
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, &v14, &v18) )
    {
LABEL_4:
      v6 = 0;
      goto LABEL_5;
    }
  }
  else if ( v14 != v18 )
  {
    goto LABEL_4;
  }
  if ( (v17 & 1) != 0 || (v21 & 1) != 0 )
    v10 = (unsigned int)sub_182C7B0(v5, &v16, &v20) == 0;
  else
    v10 = v16 == v20;
  if ( !v10 )
    goto LABEL_4;
  v11 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32) + 8LL * a2)) + 24);
  v6 = 0;
  if ( v11 && *v11 == 5 )
    LOBYTE(v6) = v11[1] == 1;
  v12 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32) + 8 * v3)) + 24);
  v13 = 0;
  if ( v12 && *v12 == 5 )
    v13 = v12[1] == 1;
  LOBYTE(v6) = (_BYTE)v6 == v13;
LABEL_5:
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v14);
  sub_182CBA0(v7, &v16);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v18);
  sub_182CBA0(v8, &v20);
  return v6;
}

