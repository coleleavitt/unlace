__int64 __fastcall sub_121A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // ebp
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 15 )
    return 1;
  v6 = *(unsigned int *)(a1 + 4);
  v8 = *(_QWORD *)(a1 + 8);
  v15 = -1;
  v16 = 0;
  result = sub_1C3110(v8, &v15, v6, a4, a5);
  if ( (_BYTE)result )
  {
    if ( (_BYTE)v16 == 1 )
    {
      v14 = v15;
      sub_11CDA0(a1);
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v14;
    }
    else
    {
      if ( (_BYTE)v16 != 5 )
        return 1;
      v9 = v15;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      sub_11CDA0(a1);
      *(_BYTE *)a1 = 5;
      v13 = (_QWORD *)j__qalloc_or_throw(16, (__int64)&v15, v11, v12);
      *v13 = v10;
      v13[1] = v9;
      *(_QWORD *)(a1 + 8) = v13;
    }
    *(_DWORD *)(a1 + 4) = HIDWORD(v16);
    return 1;
  }
  return result;
}
