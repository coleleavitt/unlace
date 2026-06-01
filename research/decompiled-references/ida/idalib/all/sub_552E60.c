__int64 __fastcall sub_552E60(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 *v5; // rdi
  unsigned int v6; // eax
  _QWORD **v7; // rbx
  unsigned int v8; // ebp
  void *v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  int v12; // [rsp+8h] [rbp-60h] BYREF
  void *v13; // [rsp+10h] [rbp-58h]
  int *v14; // [rsp+18h] [rbp-50h]
  int *v15; // [rsp+20h] [rbp-48h]
  __int128 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+40h] [rbp-28h]
  unsigned __int64 v19; // [rsp+48h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v14 = &v12;
  v15 = &v12;
  v4 = *a1;
  v12 = 0;
  v5 = *(__int64 **)(v4 + 1824);
  v18 = 0;
  v13 = nullptr;
  v17 = 0;
  v16 = 0;
  LOBYTE(v6) = sub_551420(v5, (__int64)&v11, a2, a3, a4);
  v7 = (_QWORD **)v13;
  v8 = v6;
  if ( v13 )
  {
    do
    {
      sub_533700(v7[3]);
      v9 = v7;
      v7 = (_QWORD **)v7[2];
      operator delete(v9, 0x28u);
    }
    while ( v7 );
  }
  return v8;
}
