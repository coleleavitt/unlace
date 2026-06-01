__int64 __fastcall sub_58BD60(_BYTE *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r12d
  char *v6; // rbx
  char *v7; // rbp
  int v9[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v10; // [rsp+8h] [rbp-80h]
  int v11[2]; // [rsp+10h] [rbp-78h]
  int v12[2]; // [rsp+18h] [rbp-70h]
  int v13; // [rsp+20h] [rbp-68h]
  void *ptr; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+30h] [rbp-58h]
  int v16; // [rsp+40h] [rbp-48h] BYREF
  void *v17; // [rsp+48h] [rbp-40h]
  int v18[2]; // [rsp+50h] [rbp-38h]
  int v19[2]; // [rsp+58h] [rbp-30h]
  int v20[2]; // [rsp+60h] [rbp-28h]
  int v21[2]; // [rsp+68h] [rbp-20h]

  *(_QWORD *)v21 = __readfsqword(0x28u);
  *(_QWORD *)v12 = a3;
  v13 = a5;
  LODWORD(v15) = 0;
  v10 = 0;
  ptr = (void *)qword_2CCB598;
  *(_QWORD *)v18 = &v16;
  *(_QWORD *)v19 = &v16;
  *(_QWORD *)v11 = 0;
  *(_QWORD *)v9 = &off_2B2EC58;
  v16 = 0;
  v17 = nullptr;
  *(_QWORD *)v20 = 0;
  v5 = sub_58A9F0((__int64)v9, a1, a2, a4, 0);
  if ( v5 )
    v5 = set_qerrno((unsigned int)v15);
  *(_QWORD *)v9 = &off_2B2EC58;
  v6 = (char *)v17;
  if ( v17 )
  {
    do
    {
      v7 = v6;
      sub_589A30(*((_QWORD **)v6 + 3));
      v6 = *((char **)v6 + 2);
      free_idcv(v7 + 40);
      operator delete(v7, 0x48u);
    }
    while ( v6 );
  }
  return v5;
}
