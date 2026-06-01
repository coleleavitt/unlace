__int64 __fastcall sub_12DA900(unsigned __int64 a1, __int64 a2, __int64 a3, double a4)
{
  char v4; // al
  unsigned int v5; // ebp
  unsigned int v9; // eax
  _WORD *v10; // r15
  __int64 v11; // r14
  __int16 v12; // ax
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+10h] [rbp-48h]
  unsigned int v21; // [rsp+1Ch] [rbp-3Ch]

  v19 = nullptr;
  if ( a1 )
  {
    v4 = *(_BYTE *)(a1 + 27);
    if ( (v4 & 4) == 0 && (v4 & 1) != 0 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v9) = sub_12DA860(a1, (unsigned __int64 *)&v19, *(_QWORD *)(*(_QWORD *)a2 + 2320LL));
        v5 = v9;
        if ( (_BYTE)v9 )
        {
          if ( *(_WORD *)(a1 + 24) == 1 )
          {
            v10 = (_WORD *)sub_BFBAE0(*(_QWORD *)(a1 + 48));
            v11 = sub_C9AC10(a1);
            v12 = *v10 & 0x1FF;
            if ( v12 == 29 )
            {
              v17 = sub_E935B0(a2, 1);
              if ( v17 == v19 )
              {
                v14 = 0;
                if ( v11 == sub_E93F50(a2, 0) )
                  goto LABEL_15;
                v14 = 4;
                if ( v11 == sub_E93F50(a2, 4) )
                  goto LABEL_15;
              }
              v12 = *v10 & 0x1FF;
            }
            if ( v12 == 42 )
            {
              v18 = sub_E935B0(a2, 2);
              if ( v18 == v19 )
              {
                v14 = 1;
                if ( v11 == sub_E94AE0(a2, 1) )
                  goto LABEL_15;
                v14 = 5;
                if ( v11 == sub_E94AE0(a2, 5) )
                  goto LABEL_15;
              }
              v12 = *v10 & 0x1FF;
            }
            if ( v12 == 38 )
            {
              v13 = sub_E935B0(a2, 4);
              if ( v13 == v19 )
              {
                v14 = 1;
                if ( v11 == sub_E963B0(a2, 1) || (v14 = 6, v11 == sub_E963B0(a2, 6)) )
                {
LABEL_15:
                  v15 = sub_EEC8C0(*(_QWORD *)(a1 + 48), v14, a4);
                  v16 = sub_EEC8C0(a1, v14, a4);
                  LOBYTE(v21) = 1;
                  LOBYTE(v20) = 1;
                  sub_12D7190(a3, v16, v20, v15, v21);
                  return v5;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
