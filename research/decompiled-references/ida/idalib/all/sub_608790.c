__int64 __fastcall sub_608790(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned __int8 v7; // r15
  int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ebx
  int v13; // [rsp+0h] [rbp-84h]
  unsigned __int8 v14; // [rsp+7h] [rbp-7Dh]
  char v15; // [rsp+8h] [rbp-7Ch]
  __int64 v16; // [rsp+Ch] [rbp-78h] BYREF
  void *v17; // [rsp+14h] [rbp-70h] BYREF
  __int128 v18; // [rsp+1Ch] [rbp-68h]
  void *ptr; // [rsp+2Ch] [rbp-58h]
  __int128 v20; // [rsp+34h] [rbp-50h]
  unsigned __int64 v21; // [rsp+44h] [rbp-40h]

  v15 = a4;
  v21 = __readfsqword(0x28u);
  v18 = 0;
  v16 = 0;
  v17 = nullptr;
  ptr = nullptr;
  v20 = 0;
  sub_3792E0(0x7D4u, &v16, a4);
  sub_673D30(a1, a3);
  v7 = a5;
  v14 = getinf(57) & 0xF;
  v13 = v18;
  if ( !a5 )
  {
    v8 = v18 - 1;
    if ( (int)v18 - 1 >= 0 )
    {
      v9 = 4LL * v8;
      while ( !sub_673F50(a3, *(unsigned int *)((char *)v17 + v9)) )
      {
        --v8;
        v9 -= 4;
        if ( v8 == -1 )
          goto LABEL_7;
      }
      v7 = 1;
      v13 = v8 + 1;
    }
  }
LABEL_7:
  v10 = 66;
  if ( _bittest64(&v10, v14) )
    v7 &= *(_DWORD *)(a1[2] + 4) == 13;
  v11 = sub_6070F0(*a1, (__int64 *)a2, a3, &v17, v13, v7);
  if ( v11 > 0 )
  {
    *(_DWORD *)(a2 + 28) = 0;
    *(_BYTE *)(a2 + 88) = v15 | *(_BYTE *)(a2 + 88) & 0xF;
  }
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return (unsigned int)v11;
}
