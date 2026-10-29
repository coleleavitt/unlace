__int64 __fastcall sub_BC24F0(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rax
  unsigned int v10; // ebp
  int v12; // edx
  int v13; // eax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r12
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 *v21[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v21[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v21[0];
    v3 = (_QWORD *)*v21[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v21[0];
    v3 = (_QWORD *)*v21[0];
  }
  v6 = (__int64 (*)())v3[156];
  if ( v6 != sub_BA1DD0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v21[0];
    v3 = (_QWORD *)*v21[0];
  }
  v7 = (__int64 (*)())v3[165];
  if ( v7 != sub_BA1E60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v21[0];
    v3 = (_QWORD *)*v21[0];
  }
  v8 = (__int64 (*)())v3[172];
  if ( v8 != sub_BA1ED0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(a1, a2) )
      return 0;
    a1 = v21[0];
    v3 = (_QWORD *)*v21[0];
  }
  v9 = (__int64 (*)())v3[175];
  if ( v9 == sub_BA1F00 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v9)(a1, a2) )
  {
    v10 = sub_BA57C0(v21, a2);
    if ( (_BYTE)v10 )
    {
      if ( !sub_B50AE0(a2)
        || (v12 = *(_DWORD *)(a2 + 96), (BYTE1(v12) & 6) != 4)
        || (v20 = sub_B50AD0(a2),
            (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(*v21[0] + 96))(v21[0], v20)) )
      {
        if ( !sub_B50AE0(a2)
          || (v13 = *(_DWORD *)(a2 + 96), (BYTE1(v13) & 6) == 4)
          || (BYTE1(v13) & 6) == 2
          || (v19 = sub_B50A00(a2),
              (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(*v21[0] + 96))(v21[0], v19)) )
        {
          if ( !sub_B6A370(a2) || (v14 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(v21, v14) )
          {
            v15 = sub_9A4B10(a2);
            v17 = v16;
            v18 = (_QWORD *)v15;
            if ( (_QWORD *)v15 == v16 )
              return v10;
            while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v21[0] + 32))(v21[0], *v18) )
            {
              if ( v17 == ++v18 )
                return v10;
            }
          }
        }
      }
    }
  }
  return 0;
}

