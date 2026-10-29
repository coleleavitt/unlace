void __fastcall sub_F4C0B0(__int64 a1, __int64 a2, double a3)
{
  int v4; // r14d
  unsigned int i; // ebp
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16[11]; // [rsp+0h] [rbp-58h] BYREF

  sub_995540(*(_QWORD *)(a1 + 1096), " ");
  v4 = *(_DWORD *)(a2 + 28);
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v13 = sub_C03D50(a2, i);
      sub_F4B4A0(a1, v13);
      v14 = *(_QWORD *)(a1 + 1096);
      v15 = *(_QWORD *)(v14 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v15) <= 2 )
      {
        sub_227BF10(v14, " = ", 3);
      }
      else
      {
        *(_BYTE *)(v15 + 2) = 32;
        *(_WORD *)v15 = 15648;
        *(_QWORD *)(v14 + 32) += 3LL;
      }
      sub_C03D60(v16, a2, i);
      v6 = *(_QWORD *)(a1 + 1096);
      v7 = v16[2];
      v8 = *(_QWORD *)(v6 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v6 + 24) - v8) > 6 )
      {
        *(_DWORD *)v8 = 1734697504;
        *(_WORD *)(v8 + 4) = 28265;
        *(_BYTE *)(v8 + 6) = 32;
        *(_QWORD *)(v6 + 32) += 7LL;
      }
      else
      {
        sub_227BF10(v6, " begin ", 7);
      }
      sub_F439B0(a1, v16[0], a3);
      v9 = *(_QWORD *)(a1 + 1096);
      v10 = *(_QWORD *)(v9 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v10) > 4 )
      {
        *(_DWORD *)v10 = 1684956448;
        *(_BYTE *)(v10 + 4) = 32;
        *(_QWORD *)(v9 + 32) += 5LL;
      }
      else
      {
        sub_227BF10(v9, " end ", 5);
      }
      sub_F439B0(a1, v16[1], a3);
      if ( v7 )
      {
        v11 = *(_QWORD *)(a1 + 1096);
        v12 = *(_QWORD *)(v11 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v11 + 24) - v12) > 5 )
        {
          *(_DWORD *)v12 = 1702130464;
          *(_WORD *)(v12 + 4) = 8304;
          *(_QWORD *)(v11 + 32) += 6LL;
        }
        else
        {
          sub_227BF10(v11, " step ", 6);
        }
        sub_F439B0(a1, v7, a3);
      }
    }
  }
}
