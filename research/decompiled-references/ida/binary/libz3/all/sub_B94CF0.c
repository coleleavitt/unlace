__int64 __fastcall sub_B94CF0(__int64 a1, __int64 a2)
{
  char v2; // r14
  _DWORD *v3; // rax
  unsigned int v4; // r15d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned int v9; // r13d
  __int64 v10; // rax
  unsigned int v11; // eax
  char v12; // al
  char v13; // al
  int v14; // eax
  _QWORD *v15; // rdx
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // rsi
  unsigned int *v20; // rax
  _QWORD *v21; // rax
  char **exception; // r14
  unsigned int v23; // [rsp+10h] [rbp-D8h]
  unsigned int v24; // [rsp+10h] [rbp-D8h]
  int v25; // [rsp+14h] [rbp-D4h]
  int v26[2]; // [rsp+28h] [rbp-C0h] BYREF
  int v27[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-B0h]
  __int64 v29; // [rsp+40h] [rbp-A8h]
  __int64 v30; // [rsp+48h] [rbp-A0h]
  char v31[32]; // [rsp+50h] [rbp-98h] BYREF
  char v32[32]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v33[11]; // [rsp+90h] [rbp-58h] BYREF

  v2 = *(_BYTE *)(a1 + 944);
  if ( !v2 )
    return 0;
  if ( *(_WORD *)(a2 + 4) || (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v3 != 5 )
  {
LABEL_5:
    sub_B811F0(a1, a2);
    return 0;
  }
  v6 = v3[1];
  switch ( v6 )
  {
    case 2:
      v8 = *(_QWORD *)(a2 + 32);
      v7 = *(_QWORD *)(a2 + 40);
      v2 = 0;
      break;
    case 3:
      v7 = *(_QWORD *)(a2 + 32);
      v8 = *(_QWORD *)(a2 + 40);
      v2 = 0;
      break;
    case 4:
      v8 = *(_QWORD *)(a2 + 32);
      v7 = *(_QWORD *)(a2 + 40);
      break;
    case 5:
      v7 = *(_QWORD *)(a2 + 32);
      v8 = *(_QWORD *)(a2 + 40);
      break;
    default:
      goto LABEL_5;
  }
  v4 = sub_B79830(a1 + 1424, v8, v7);
  if ( !(_BYTE)v4 )
    goto LABEL_5;
  *(_QWORD *)v27 = 0;
  v28 = 0;
  v29 = 1;
  v30 = 0;
  *(_QWORD *)v26 = 0;
  sub_B7FA70((int *)a1, (__int64 *)(a1 + 1568), v26, (__int64)v27);
  if ( *(_QWORD *)v26 && *(_DWORD *)(*(_QWORD *)v26 - 4LL) )
  {
    v9 = sub_B67520(*(_QWORD *)(a1 + 16), (_DWORD *)a2);
    sub_8F1CE0(*(_QWORD *)(a1 + 16), v9, *(_DWORD *)(a1 + 8));
    v23 = 2 * v9;
    v10 = *(_QWORD *)(a1 + 1352);
    if ( v10 )
      v11 = *(_DWORD *)(v10 - 4);
    else
      v11 = 0;
    v33[0] = __PAIR64__(v11, v9);
    sub_83C760(a1 + 1376, (__int32 *)v33);
    v12 = sub_B75C00(v8);
    sub_B7B730((__int64)v31, a1, v12, v2, v27);
    v25 = sub_B84DB0(a1, (int **)v26, (__int64)v31, v23);
    sub_B7A5B0(a1, (__int64 *)v26, (__int64)v27);
    v13 = sub_B75C00(v8);
    sub_B7B730((__int64)v32, a1, v13, v2 ^ 1, v27);
    v14 = sub_B84DB0(a1, (int **)v26, (__int64)v32, v23 ^ 1);
    v15 = *(_QWORD **)(a1 + 1352);
    v16 = v14;
    if ( v15 )
    {
      v17 = *((unsigned int *)v15 - 1);
      if ( (_DWORD)v17 == *((_DWORD *)v15 - 2) )
      {
        v19 = 16 * ((unsigned int)(3 * v17 + 1) >> 1) + 8;
        if ( 16 * (int)v17 + 8 >= (unsigned int)v19 || (unsigned int)v17 >= (unsigned int)(3 * v17 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B75C60(v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int)(3 * v17 + 1) >> 1;
        v20 = (unsigned int *)sub_186B300(v15 - 1, v19);
        v15 = v20 + 2;
        *(_QWORD *)(a1 + 1352) = v20 + 2;
        *v20 = v24;
        v18 = (__int64)&v20[4 * v20[1] + 2];
      }
      else
      {
        v18 = (__int64)&v15[2 * v17];
      }
    }
    else
    {
      v21 = (_QWORD *)sub_186B270(0x28u);
      *v21 = 2;
      v15 = v21 + 1;
      *(_QWORD *)(a1 + 1352) = v21 + 1;
      v18 = (__int64)(v21 + 1);
    }
    *(_DWORD *)v18 = v9;
    *(_BYTE *)(v18 + 4) = 0;
    *(_DWORD *)(v18 + 8) = v25;
    *(_DWORD *)(v18 + 12) = v16;
    ++*((_DWORD *)v15 - 1);
    sub_25A130(v32);
    sub_25A130(v31);
  }
  else
  {
    sub_B811F0(a1, a2);
    v4 = 0;
  }
  sub_8BA940((__int64 *)v26);
  sub_25A130((char *)v27);
  return v4;
}

