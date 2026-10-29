__int64 __fastcall sub_766380(__int64 a1, unsigned int *a2, __int64 a3, char *a4)
{
  char *v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  unsigned int v8; // [rsp+0h] [rbp-18h] BYREF
  int v9; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v8 = sub_766190(nullptr, a2, a3, a4);
  v5 = qword_2CD44C0;
  v6 = (unsigned __int8)*qword_2CD44C0;
  if ( !(_BYTE)v6 )
    sub_76E6C0(0, a2, v6, v4);
  if ( (_BYTE)v6 != 64 )
  {
    v9 = sub_764A40(nullptr, a2, v6, v4);
    sub_771030(&v8, &v9);
    v5 = qword_2CD44C0;
  }
  qword_2CD44C0 = v5 + 1;
  return v8;
}
