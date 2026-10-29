__int64 __fastcall sub_3D6730(__int64 *a1, __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  char *v5; // rbp
  signed int v6; // ebx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  signed int v9; // r14d
  signed int v10; // r15d
  unsigned int v11; // ebp
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // [rsp+Ch] [rbp-6Ch] BYREF
  int v18[4]; // [rsp+10h] [rbp-68h] BYREF
  int v19[2]; // [rsp+20h] [rbp-58h]
  int v20[2]; // [rsp+28h] [rbp-50h]
  int v21[2]; // [rsp+38h] [rbp-40h]

  *(_QWORD *)v21 = __readfsqword(0x28u);
  if ( a4 > 0x20 )
    return 0;
  v5 = (char *)a3;
  v6 = a4;
  if ( a3 )
  {
    _BitScanReverse64(&v13, a3);
    v9 = v13 + 1;
    v14 = sub_3C4100((__int64)a1, (__int64)a2 + a3);
    v10 = v14;
    if ( !v6 )
      v6 = sub_3C4270((__int64)a1, (__int64)a2, v9, v14);
  }
  else
  {
    if ( !a4 )
      return 0;
    v7 = ((unsigned __int64)a2 + (int)((1LL << a4) - 1)) & -(1 << a4);
    v5 = (char *)(v7 - (_QWORD)a2);
    if ( v7 == (_QWORD)a2 )
      return 0;
    _BitScanReverse64(&v8, (unsigned __int64)v5);
    v9 = v8 + 1;
    v10 = sub_3C4100((__int64)a1, v7);
  }
  if ( v6 <= v10 && v6 >= v9 )
  {
    *(_OWORD *)v18 = 0;
    *(_QWORD *)v19 = 0;
    *(_QWORD *)v20 = 0;
    v11 = sub_3D4400(a1, a2, 2952790016LL, v5, (void *)0xFFFFFFFFFFFFFFFFLL, (const __m128i *)v18);
    if ( *(_QWORD *)v19 )
      (*(void (__fastcall **)(int *, int *, __int64))v19)(v18, v18, 3);
    if ( (_BYTE)v11 )
    {
      v17 = v6 + 1;
      v15 = ea2node(a2);
      netnode_supset(v15, 17, &v17, 4, 65, v16);
      return v11;
    }
  }
  return 0;
}
