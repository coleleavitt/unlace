__int64 __fastcall udm_t__compare_with(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rax
  unsigned int v4; // eax
  _QWORD **v5; // rbx
  unsigned int v6; // ebp
  void *v7; // rdi
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  int v10; // [rsp+8h] [rbp-60h] BYREF
  void *v11; // [rsp+10h] [rbp-58h]
  int *v12; // [rsp+18h] [rbp-50h]
  int *v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v12 = &v10;
  v13 = &v10;
  v10 = 0;
  v16 = 0;
  v11 = nullptr;
  v3 = *(__int64 **)(qword_2CA1698 + 1632);
  v14 = 0;
  v15 = 0;
  LOBYTE(v4) = sub_53BE90(v3, (__int64)&v9, a1, a2, a3);
  v5 = (_QWORD **)v11;
  v6 = v4;
  if ( v11 )
  {
    do
    {
      sub_51AA20(v5[3]);
      v7 = v5;
      v5 = (_QWORD **)v5[2];
      operator delete(v7, 0x28u);
    }
    while ( v5 );
  }
  return v6;
}

