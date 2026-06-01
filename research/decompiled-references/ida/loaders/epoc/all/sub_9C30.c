__int64 __fastcall sub_9C30(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v7 = 0;
  v9 = 0;
  v7 = qvector_reserve(&v7, 0, 156, 1);
  memset((void *)(v7 + v8), 0, 156 - v8);
  *(_QWORD *)&v8 = 156;
  qlseek(a3, 0, 0);
  v4 = qlread(a3, v7, 156);
  v5 = 0;
  if ( v4 == 156 )
    v5 = (unsigned __int8)sub_9830(&v7, a1, a2);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v5;
}

