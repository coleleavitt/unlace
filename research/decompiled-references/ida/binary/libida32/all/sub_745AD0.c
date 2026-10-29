__int64 __fastcall sub_745AD0(char a1, unsigned int *a2)
{
  __int64 v2; // r14
  __int64 v4; // r12
  unsigned int *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  unsigned int v14; // eax
  char *v15; // rax
  char *v16; // rdx
  unsigned __int8 v17; // [rsp+3h] [rbp-175h] BYREF
  unsigned int v18; // [rsp+4h] [rbp-174h] BYREF
  int v19; // [rsp+8h] [rbp-170h] BYREF
  int v20; // [rsp+Ch] [rbp-16Ch] BYREF
  char *v21; // [rsp+10h] [rbp-168h] BYREF
  int v22; // [rsp+18h] [rbp-160h]
  char v23; // [rsp+20h] [rbp-158h] BYREF
  char *v24; // [rsp+70h] [rbp-108h] BYREF
  int v25; // [rsp+78h] [rbp-100h]
  char v26; // [rsp+80h] [rbp-F8h] BYREF
  char *v27; // [rsp+D0h] [rbp-A8h] BYREF
  int v28; // [rsp+D8h] [rbp-A0h]
  char v29[88]; // [rsp+E0h] [rbp-98h] BYREF
  unsigned __int64 v30; // [rsp+138h] [rbp-40h]

  v2 = qword_2CA2EB0;
  v30 = __readfsqword(0x28u);
  v4 = qword_2CA2EB8;
  v21 = &v23;
  v5 = (unsigned int *)&v24;
  v6 = qword_2CAA5D0;
  qword_2CA2EB0 = (__int64)&v21;
  v24 = &v26;
  qword_2CA2EB8 = (__int64)&v27;
  v22 = 655360;
  v25 = 655360;
  qword_2CAA5D0 = &v24;
  v27 = v29;
  v28 = 655360;
  v18 = 0;
  v17 = 0;
  v7 = (unsigned __int8)*qword_2CAA5C0;
  if ( (_BYTE)v7 == 64 )
  {
    a2 = &v18;
    ++qword_2CAA5C0;
    sub_752640(&v24, &v18);
    byte_2CA2EAB = 1;
LABEL_5:
    v19 = sub_7454C0(v5, a2, v8, v9, v10, v11);
    v20 = sub_752B50(&v19);
    sub_7506B0(&v18, &v20);
    if ( a1 )
    {
      v15 = qword_2CAA5C0;
      v16 = ++qword_2CAA5C0;
      if ( !*v15 )
        sub_74E200(&v18, &qword_2CAA5C0, v16, v12);
    }
    goto LABEL_6;
  }
  if ( (_BYTE)v7 != 63 )
  {
    v5 = nullptr;
    v18 = sub_745CD0(0);
    if ( !(_WORD)v18 )
      byte_2CA2EAB = 1;
    goto LABEL_5;
  }
  a2 = (unsigned int *)&qword_2CAA5C0;
  v5 = (unsigned int *)&v17;
  ++qword_2CAA5C0;
  v14 = sub_743E70((unsigned int *)&v17, (__int64)&qword_2CAA5C0, v7, v29);
  v8 = v17;
  v18 = v14;
  if ( !(_WORD)v14 )
    byte_2CA2EAB = 1;
  if ( !v17 )
    goto LABEL_5;
LABEL_6:
  qword_2CA2EB0 = v2;
  qword_2CAA5D0 = v6;
  qword_2CA2EB8 = v4;
  return v18;
}

