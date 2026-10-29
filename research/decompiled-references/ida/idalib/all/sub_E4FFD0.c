_DWORD *__fastcall sub_E4FFD0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _DWORD *result; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r12
  double v12; // xmm0_8
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rax
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // r9
  _DWORD *v21; // r13
  unsigned __int64 v22; // rsi
  _DWORD *v23; // [rsp+0h] [rbp-38h] BYREF
  __int64 v24[6]; // [rsp+8h] [rbp-30h] BYREF

  result = (_DWORD *)sub_E3DA60((__int64 *)a1, a2);
  if ( !(_BYTE)result )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    result = (_DWORD *)sub_E3D1B0(a1, v7);
    if ( !(_BYTE)result )
    {
      v23 = nullptr;
      v8 = sub_E38B70(a2, 0, (__int64 *)&v23);
      v10 = v8;
      if ( v8 )
      {
        sub_E502E0(a1, v8, v9, a3);
        v21 = v23;
        v22 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)(v22 + 28) & 0x7Fu) - 68 >= 7 )
          v22 = 0;
        sub_F22AA0(v24, v22);
        sub_E4FC20((__int64 *)a1, v24[0], v21);
        v13 = *(_QWORD *)(a1 + 8);
        v14 = *(_BYTE **)(v13 + 32);
        if ( (unsigned __int64)v14 < *(_QWORD *)(v13 + 24) )
          goto LABEL_5;
      }
      else
      {
        v11 = sub_E3D330(*(_QWORD *)a1, a2);
        v12 = sub_E50130(a1, v11, a3);
        sub_E4D010((__int64 *)a1, a2, *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 40), v11, 0, v12);
        v13 = *(_QWORD *)(a1 + 8);
        v14 = *(_BYTE **)(v13 + 32);
        if ( (unsigned __int64)v14 < *(_QWORD *)(v13 + 24) )
        {
LABEL_5:
          *(_QWORD *)(v13 + 32) = v14 + 1;
          *v14 = 77;
LABEL_6:
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
          v16 = *(_DWORD *)(a1 + 40);
          v24[0] = v15;
          *(_DWORD *)(a1 + 40) = v16 + 1;
          result = sub_E3B4F0(a1 + 232, v24, v17, v18, v19, v20);
          *result = v16;
          return result;
        }
      }
      sub_227BA10(v13, 77);
      goto LABEL_6;
    }
  }
  return result;
}
