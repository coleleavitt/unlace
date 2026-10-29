__int64 __fastcall sub_8C37F0(__int64 a1, _DWORD *a2, const char *a3, int a4)
{
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // r14
  int v9; // r8d
  int v10; // r9d
  _DWORD *v11; // rbp
  unsigned int v12; // ebx
  __int64 (__fastcall **v14)(); // [rsp+0h] [rbp-78h] BYREF
  char v15; // [rsp+8h] [rbp-70h]
  void *v16; // [rsp+10h] [rbp-68h] BYREF
  __int128 v17; // [rsp+18h] [rbp-60h]
  int v18; // [rsp+28h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v15 = 92;
  v17 = 0;
  v14 = &off_2B3F028;
  v16 = nullptr;
  if ( a3 )
  {
    v6 = strlen(a3);
    v7 = v6 + 1;
    v8 = v6;
    v16 = (void *)qvector_reserve(&v16, 0, v6 + 1, 1);
    *(_QWORD *)&v17 = v7;
    memmove(v16, a3, v8);
    *((_BYTE *)v16 + v8) = 0;
  }
  v18 = a4;
  if ( (unsigned int)sub_8C34D0(a1, (char *)&v14) )
    v11 = nullptr;
  else
    v11 = (_DWORD *)sub_8C3250(a1, v15, 0);
  v12 = sub_8BE300((_QWORD *)a1, (__int64)v11, 93, (_BYTE *)(a1 + 288), v9, v10);
  if ( !v12 && a2 )
    *a2 = v11[3];
  if ( v11 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  sub_8D5CA0(&v14);
  return v12;
}
