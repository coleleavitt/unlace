__int64 __fastcall sub_9E1330(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r13d
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int8 **v13; // rax
  unsigned __int8 **v14; // r12
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-80h] BYREF
  _BYTE *v24[15]; // [rsp+10h] [rbp-78h] BYREF

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0
    || !(unsigned __int8)sub_A1AD60(a1)
    || (unsigned __int8)sub_9E1180(a1, a2, a3) )
  {
    if ( (unsigned __int8)sub_9D4710(a1, a2, a3) )
    {
      if ( (unsigned __int8)sub_9E1270(a1, a2, *(_QWORD *)a3) )
      {
        if ( (unsigned __int8)sub_9D4C70(a1, a2, a3) )
        {
          LOBYTE(v8) = sub_9D71E0(a1, a2, a3, 2);
          v6 = v8;
          if ( (_BYTE)v8 )
          {
            v9 = *(_DWORD *)(a3 + 48);
            if ( v9 == 1 )
            {
              v16 = *(_QWORD *)(a1 + 184);
              v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
              v18 = sub_A1D1C0(a3 + 24, v17, a4);
              v20 = v19;
              v21 = sub_A1A4E0(v16, 56);
              *(_QWORD *)v21 = 0;
              *(_DWORD *)(v21 + 48) = 1;
              *(_QWORD *)(v21 + 24) = v18;
              *(_QWORD *)(v21 + 32) = v20;
              *(_OWORD *)(v21 + 8) = 0;
              return v6;
            }
            if ( v9 )
            {
              v23 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
              v13 = (unsigned __int8 **)sub_A2E0C0(a1, &v23, 2172, 0);
              v14 = v13;
              if ( v13 )
              {
                sub_9B5410(v13, 0);
                v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
                sub_A248F0(v24, a3, v15);
                sub_838D50(v14, v24[0], (size_t)v24[1]);
              }
              else
              {
                v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
                sub_A248F0(v24, a3, v22);
              }
              std::string::_M_dispose();
            }
            else
            {
              v10 = *(_QWORD *)(a3 + 24);
              if ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 20LL) >= a4 )
              {
                v11 = *(_QWORD *)(a1 + 184);
                sub_A1C030(v24, v10, a4 + *(_DWORD *)a3, a4 + *(_DWORD *)a3);
                v12 = sub_A1A4E0(v11, 56);
                sub_A1C070(v12, v24);
                sub_A1C0C0(v24);
                return v6;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

