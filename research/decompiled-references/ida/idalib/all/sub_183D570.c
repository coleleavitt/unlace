__int64 __fastcall sub_183D570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rdx

  v9 = *(_QWORD *)(a3 + 16);
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  v11 = *(_DWORD *)(a3 + 40) & 7;
  v12 = (v9 >> 2) & 1;
  if ( (_DWORD)v11 == 5 )
  {
    if ( v12 )
      v10 = (_QWORD *)*v10;
    if ( v10 )
      v10 -= 8;
    sub_B9C8A0((__int64)v10, a3, v11, a4, a5, a6);
    v18 = *(_QWORD *)(a3 + 16);
    v10 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
    v12 = (v18 >> 2) & 1;
  }
  if ( v12 )
    v10 = (_QWORD *)*v10;
  sub_B91710((__int64)v10, (__int64 *)a3);
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 100) )
    {
      v13 = *(_QWORD **)(a2 + 80);
      v14 = &v13[*(unsigned int *)(a2 + 92)];
      if ( v13 != v14 )
      {
        v15 = *(_QWORD **)(a2 + 80);
        if ( a3 == *v13 )
        {
LABEL_20:
          v20 = *(_DWORD *)(a2 + 92) - 1;
          v21 = v13[v20];
          *(_DWORD *)(a2 + 92) = v20;
          *v15 = v21;
          sub_15C14A0(a1 + 2608, a3);
          goto LABEL_12;
        }
        while ( v14 != ++v15 )
        {
          if ( a3 == *v15 )
            goto LABEL_20;
        }
      }
    }
    else
    {
      v19 = (_QWORD *)sub_2236570(a2 + 80, a3);
      if ( v19 )
      {
        *v19 = -2;
        ++*(_DWORD *)(a2 + 96);
        sub_15C14A0(a1 + 2608, a3);
        goto LABEL_12;
      }
    }
    sub_15C14A0(a1 + 2608, a3);
  }
LABEL_12:
  v16 = sub_B9A040(a3);
  return sub_B9A300(v16, a3);
}
