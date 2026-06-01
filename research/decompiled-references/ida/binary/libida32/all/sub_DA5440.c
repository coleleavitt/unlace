__int64 __fastcall sub_DA5440(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r13d
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int8 **v19; // rax
  unsigned __int8 **v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-70h] BYREF
  void *v24[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v25; // [rsp+20h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 8) == 0
    || !(unsigned __int8)sub_DFDF30(a1)
    || (unsigned __int8)sub_DA4BF0(a1, a2, a3, 2) )
  {
    if ( (unsigned __int8)sub_DA5070(a1, a2, (_QWORD *)a3, 2) )
    {
      if ( (unsigned __int8)sub_DA4610(a1, a2, a3) )
      {
        v6 = sub_DA5370(a1, a2, a3, 2);
        if ( (_BYTE)v6 )
        {
          v8 = *(_DWORD *)(a3 + 24);
          if ( v8 == 1 )
          {
            v13 = *(_QWORD *)(a1 + 176);
            v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
            v15 = sub_E00E90(a3 + 32, v14, a4);
            v17 = v16;
            v18 = sub_DFD980(v13, 48);
            *(_QWORD *)v18 = 0;
            *(_OWORD *)(v18 + 8) = 0;
            *(_DWORD *)(v18 + 24) = 1;
            *(_QWORD *)(v18 + 32) = v15;
            *(_QWORD *)(v18 + 40) = v17;
            return v6;
          }
          if ( v8 )
          {
            v23 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
            v19 = (unsigned __int8 **)sub_E0FE60(a1, &v23, 2374, 0);
            v20 = v19;
            if ( v19 )
            {
              sub_AC60B0(v19, 0, 2u);
              v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
              sub_E052E0(v24, a3, v21);
              sub_AC84E0(v20, (_BYTE *)v24[0], (signed __int64)v24[1]);
            }
            else
            {
              v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
              sub_E052E0(v24, a3, v22);
            }
            if ( v24[0] != &v25 )
              operator delete(v24[0]);
          }
          else
          {
            v9 = sub_CDAA10(a3);
            v10 = *(_QWORD *)(a3 + 32);
            if ( v9 + (unsigned __int64)a4 < *(unsigned int *)(*(_QWORD *)(v10 + 32) + 28LL) )
            {
              v11 = *(_QWORD *)(a1 + 176);
              sub_DFF4E0(v24, v10, a4 + *(_DWORD *)a3, a4 + *(_DWORD *)a3);
              v12 = sub_DFD980(v11, 48);
              sub_DFF520(v12);
              sub_DFF560(v24);
              return v6;
            }
          }
        }
      }
    }
  }
  return 0;
}

