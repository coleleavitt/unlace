char __fastcall sub_1DC2D70(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  _QWORD *v19; // r15
  unsigned __int64 v20; // r14
  _QWORD *v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9

  if ( !sub_B8BED0(a3) || a5 == 1 && sub_B8BED0(*a4) )
  {
    v14 = *a4;
    if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v15 = *(_QWORD *)(sub_B8C1B0(v14 + 72) + 16);
      v16 = (v15 & 4) != 0 ? *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL) : v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v16 )
      {
        if ( v16 != 64 )
        {
          v17 = *(_QWORD *)(v16 + 64);
          if ( v17 )
          {
            if ( (*(_BYTE *)(v17 + 10) & 0x20) != 0 && (unsigned int)sub_B77890(v14) == 42 )
            {
              v18 = 0;
              if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35 <= 3 )
                v18 = a3;
              v19 = (_QWORD *)sub_B77A30(v14);
              if ( v19 )
              {
                v20 = sub_B77A30(v18);
                *(_BYTE *)(v19[6] + 83LL) |= 0x80u;
                v21 = (_QWORD *)sub_BC3640(v19);
                *v21 = *v21 & 7LL | v20;
              }
              else
              {
                v24 = (_QWORD *)sub_B8C330(v14);
                sub_B7DAE0(v14, v24, v18, 1, v25, v26);
              }
            }
          }
        }
      }
    }
    sub_1DC20B0(*(_QWORD *)(*a1 + 11280LL), a3, v14, v9);
    LOBYTE(v11) = sub_B8E0B0(a3);
    if ( (_BYTE)v11 )
    {
      v11 = sub_B8D340(a3);
      v22 = v11;
      if ( v11 )
      {
        LOBYTE(v11) = sub_B8E180(v11);
        if ( (_BYTE)v11 )
        {
          v23 = *(_BYTE *)(v22 + 8) & 0x7F;
          if ( v23 > 0x12u )
          {
            if ( ((v23 + 94) & 0x7Fu) > 5 )
              return v11;
          }
          else
          {
            v11 = 1LL << v23;
            if ( ((1LL << v23) & 0x40182) == 0 )
              return v11;
          }
          LOBYTE(v11) = sub_1E04EF0(*a1, v22, *a2);
        }
      }
    }
  }
  else
  {
    v10 = &a4[a5];
    for ( LOBYTE(v11) = sub_1DC29F0(*(_QWORD *)(*a1 + 11280LL), a3, v8, v9);
          v10 != a4;
          LOBYTE(v11) = sub_1DC26A0(*(_QWORD *)(*a1 + 11280LL), a3, v13, v12) )
    {
      v13 = *a4++;
    }
  }
  return v11;
}
