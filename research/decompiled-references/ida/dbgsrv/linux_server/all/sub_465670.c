/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465670
// Address: 0x0000000000465670

//----- (0000000000465670) ----------------------------------------------------
__int64 __fastcall sub_465670(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v7; // r12
  const void *v8; // r14
  void *v9; // rdi
  void *v10; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  ptr = nullptr;
  v12 = 0;
  sub_4653C0(a3, (__int64)&ptr);
  v3 = sub_465560(a1, (__int64)&ptr);
  LOBYTE(v4) = v3 != (_QWORD *)(a1 + 8) && a2 != 0;
  v5 = v4;
  if ( (_BYTE)v4 && (_QWORD *)a2 != v3 + 7 )
  {
    v7 = v3[8];
    if ( v7 < 2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
    else
    {
      v8 = (const void *)v3[7];
      v9 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v7 )
      {
        v10 = sub_481540(a2, *(void **)a2, v3[8], 1u);
        *(_QWORD *)a2 = v10;
        v9 = v10;
      }
      *(_QWORD *)(a2 + 8) = v7;
      memmove(v9, v8, v7 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v7 - 1) = 0;
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    j__free(ptr);
  }
  return v5;
}
// 4656C9: variable 'v4' is possibly undefined
