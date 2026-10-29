__int64 __fastcall sub_C5EC00(__int64 a1, _Unwind_Exception_Class a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned __int8 v10; // dl
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 **v17; // r15
  __int64 **v18; // r14
  __int64 *v19; // rdx
  __int64 **v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 *v28; // [rsp+10h] [rbp-278h] BYREF
  __int64 *v29; // [rsp+18h] [rbp-270h] BYREF
  __int64 v30; // [rsp+20h] [rbp-268h] BYREF
  __int64 v31; // [rsp+28h] [rbp-260h]
  _QWORD v32[12]; // [rsp+30h] [rbp-258h] BYREF
  _BYTE v33[504]; // [rsp+90h] [rbp-1F8h] BYREF

  if ( !a3 )
  {
    v32[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_C516F0((_QWORD *)(a1 + 56), v32);
    v32[0] = 0;
    sub_C50B00((_QWORD *)(a1 + 88), v32);
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v10 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_19:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_28:
        sub_C5B960((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
      goto LABEL_6;
    }
    v12 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v13 = v12;
    if ( v12 )
    {
      v32[0] = v12;
      ++*(_DWORD *)(v12 + 8);
      sub_C516F0((_QWORD *)(a1 + 56), v32);
      if ( a2 != v13 )
      {
        v14 = *(_QWORD *)(a1 + 40);
        if ( v14 )
        {
          v15 = *(_DWORD *)(v14 - 4);
          if ( v15 )
            *(_BYTE *)(v14 + 16LL * (unsigned int)(v15 - 1) + 8) |= 2u;
        }
      }
      v16 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
      v32[0] = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      sub_C50B00((_QWORD *)(a1 + 88), v32);
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v10 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_28;
  if ( v5 == 2 )
    goto LABEL_21;
  if ( v5 )
    goto LABEL_19;
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_21:
    sub_39B170(a1, a2, v10, 0, a3 - (a3 != 3));
    return 0;
  }
LABEL_6:
  if ( !(unsigned __int8)sub_C5BFF0((struct _Unwind_Exception *)a1, a2) )
  {
    if ( !sub_C4E220(*(_QWORD **)(a1 + 96), *(_DWORD *)(a1 + 104), a2) )
    {
      sub_C59270((__int64)v32, *(_QWORD *)(a1 + 8), 0, *(_QWORD *)(a1 + 144));
      v17 = *(__int64 ***)(a1 + 96);
      v18 = &v17[*(unsigned int *)(a1 + 104)];
      if ( v17 != v18 )
      {
        while ( (unsigned __int64)*v17 <= 1 )
        {
          if ( v18 == ++v17 )
            goto LABEL_50;
        }
        if ( v17 != v18 )
        {
          v19 = *v17;
          do
          {
            v28 = v19;
            sub_4A3CA0((__int64)v33, &v28);
            v20 = v17 + 1;
            if ( v18 == v17 + 1 )
              break;
            while ( 1 )
            {
              v19 = *v20;
              v17 = v20;
              if ( (unsigned __int64)*v20 > 1 )
                break;
              if ( v18 == ++v20 )
                goto LABEL_50;
            }
          }
          while ( v18 != v20 );
        }
      }
LABEL_50:
      v29 = (__int64 *)a2;
      sub_4A3CA0((__int64)v33, &v29);
      v21 = *(_QWORD *)(a1 + 8);
      v22 = *(_QWORD *)(a1 + 480);
      v30 = 0;
      v31 = v21;
      sub_C5D2E0((__int64)v32, v22, &v30, (__int64 *)(a1 + 496));
      v23 = v30;
      v24 = *(_QWORD *)(a1 + 480);
      v25 = v31;
      if ( v24 != v30 )
      {
        if ( v24 )
        {
          v26 = *(_QWORD *)(a1 + 488);
          if ( (*(_DWORD *)(v24 + 8))-- == 1 )
            sub_15D7BC0(v26, v24);
        }
        *(_QWORD *)(a1 + 480) = v23;
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
      }
      sub_C4E2C0(v23, v25);
      sub_C37AF0(v32);
    }
    v7 = *(_QWORD *)(a1 + 480);
    if ( a2 == v7 )
    {
      v32[0] = *(_QWORD *)(a1 + 480);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 - 4);
        if ( v9 )
          *(_BYTE *)(v8 + 16LL * (unsigned int)(v9 - 1) + 8) |= 2u;
      }
      v32[0] = v7;
      if ( !v7 )
        goto LABEL_14;
    }
    ++*(_DWORD *)(v7 + 8);
LABEL_14:
    sub_C516F0((_QWORD *)(a1 + 56), v32);
  }
  return 1;
}

