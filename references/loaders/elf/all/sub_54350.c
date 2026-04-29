__int64 __fastcall sub_54350(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 i; // r12
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // [rsp+14h] [rbp-ACh] BYREF
  _Unwind_Exception v21; // [rsp+18h] [rbp-A8h] BYREF
  __m128i v22; // [rsp+38h] [rbp-88h] BYREF
  __int64 v23; // [rsp+50h] [rbp-70h]
  unsigned __int64 v24; // [rsp+58h] [rbp-68h]
  unsigned __int64 v25; // [rsp+80h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v23 = 0;
  v24 = 0;
  if ( sub_3E400(&v22, &v20, a1, 21, a3, 0xDu, a4) )
  {
    v21.exception_class = (_Unwind_Exception_Class)off_87118;
    v21.exception_cleanup = (_Unwind_Exception_Cleanup_Fn)a1;
    v21.private_1 = (_Unwind_Word)a2;
    LODWORD(v21.private_2) = v20;
    sub_53AE0((__int64)&v21, v23, v24);
  }
  if ( sub_3E400(&v22, &v20, a1, 20, a3, 0xCu, a4) )
  {
    v21.exception_class = (_Unwind_Exception_Class)off_87138;
    v21.exception_cleanup = (_Unwind_Exception_Cleanup_Fn)a1;
    v21.private_1 = (_Unwind_Word)a2;
    LODWORD(v21.private_2) = v20;
    sub_53260(&v21, v23, v24);
  }
  if ( sub_3E400(&v22, &v20, a1, 22, a3, 0xEu, a4) )
  {
    v9 = v23;
    v10 = v24;
    v11 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v12 = *(_QWORD *)(a1 + 480);
    v13 = v11 - v12;
    if ( qlseek(*(_QWORD *)(a1 + 472), v9 + v12, 0) != -1 )
    {
      v14 = v10 >> 1;
      if ( v14 )
      {
        for ( i = 0; i != v14; ++i )
        {
          v16 = a2[7];
          v17 = a2[6];
          v18 = v16 + 1;
          if ( a2[8] < (unsigned __int64)(v16 + 1) )
          {
            v19 = qvector_reserve(a2 + 6, v17, v16 + 1, 2);
            v16 = a2[7];
            a2[6] = v19;
            v17 = v19;
            v18 = v16 + 1;
          }
          a2[7] = v18;
          if ( (int)sub_396B0(a1, v17 + 2 * v16, 2, 1) < 0 )
            break;
        }
      }
    }
    qlseek(*(_QWORD *)(a1 + 472), v13 + *(_QWORD *)(a1 + 480), 0);
  }
  return 1;
}
