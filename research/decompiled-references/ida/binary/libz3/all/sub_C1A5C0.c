__int64 __fastcall sub_C1A5C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned __int8 v10; // dl
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // edx
  __int64 **v16; // r15
  __int64 **v17; // r14
  __int64 *v18; // rdx
  __int64 **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 *v27; // [rsp+10h] [rbp-278h] BYREF
  __int64 *v28; // [rsp+18h] [rbp-270h] BYREF
  __int64 v29; // [rsp+20h] [rbp-268h] BYREF
  __int64 v30; // [rsp+28h] [rbp-260h]
  _QWORD v31[12]; // [rsp+30h] [rbp-258h] BYREF
  _BYTE v32[504]; // [rsp+90h] [rbp-1F8h] BYREF

  if ( !a3 )
  {
    v31[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_C10880((_QWORD *)(a1 + 56), v31);
    return 1;
  }
  LOWORD(v5) = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v10 = 0;
  }
  else
  {
    if ( (_WORD)v5 )
    {
      if ( (_WORD)v5 != 2 )
      {
        if ( (_WORD)v5 != 1 )
        {
LABEL_19:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_28:
        sub_C17830((_QWORD *)a1, a2);
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
      v31[0] = v12;
      ++*(_DWORD *)(v12 + 8);
      sub_C10880((_QWORD *)(a1 + 56), v31);
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
      return 1;
    }
    v5 = *(unsigned __int16 *)(a2 + 4);
    v10 = 1;
  }
  if ( (_WORD)v5 == 1 )
    goto LABEL_28;
  if ( (_WORD)v5 == 2 )
    goto LABEL_21;
  if ( (_WORD)v5 )
    goto LABEL_19;
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_21:
    sub_39B170(a1, a2, v10, 0, a3 - (a3 != 3));
    return 0;
  }
LABEL_6:
  if ( !(unsigned __int8)sub_C17630(a1, a2) )
  {
    if ( !sub_C0E560(*(_QWORD **)(a1 + 96), *(_DWORD *)(a1 + 104), a2) )
    {
      sub_C16610((__int64)v31, *(_QWORD *)(a1 + 8), 0, *(_QWORD *)(a1 + 144));
      v16 = *(__int64 ***)(a1 + 96);
      v17 = &v16[*(unsigned int *)(a1 + 104)];
      if ( v16 != v17 )
      {
        while ( (unsigned __int64)*v16 <= 1 )
        {
          if ( v17 == ++v16 )
            goto LABEL_47;
        }
        if ( v16 != v17 )
        {
          v18 = *v16;
          do
          {
            v27 = v18;
            sub_4A3CA0((__int64)v32, &v27);
            v19 = v16 + 1;
            if ( v17 == v16 + 1 )
              break;
            while ( 1 )
            {
              v18 = *v19;
              v16 = v19;
              if ( (unsigned __int64)*v19 > 1 )
                break;
              if ( v17 == ++v19 )
                goto LABEL_47;
            }
          }
          while ( v17 != v19 );
        }
      }
LABEL_47:
      v28 = (__int64 *)a2;
      sub_4A3CA0((__int64)v32, &v28);
      v20 = *(_QWORD *)(a1 + 8);
      v21 = *(_QWORD *)(a1 + 480);
      v29 = 0;
      v30 = v20;
      sub_C18480((__int64)v31, v21, &v29, (__int64 *)(a1 + 496));
      v22 = v29;
      v23 = *(_QWORD *)(a1 + 480);
      v24 = v30;
      if ( v29 != v23 )
      {
        if ( v23 )
        {
          v25 = *(_QWORD *)(a1 + 488);
          if ( (*(_DWORD *)(v23 + 8))-- == 1 )
            sub_15D7BC0(v25, v23);
        }
        *(_QWORD *)(a1 + 480) = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
      }
      sub_C0E600(v22, v24);
      sub_8FF130(v31);
    }
    v7 = *(_QWORD *)(a1 + 480);
    if ( a2 == v7 )
    {
      v31[0] = *(_QWORD *)(a1 + 480);
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
      v31[0] = v7;
      if ( !v7 )
        goto LABEL_14;
    }
    ++*(_DWORD *)(v7 + 8);
LABEL_14:
    sub_C10880((_QWORD *)(a1 + 56), v31);
  }
  return 1;
}

