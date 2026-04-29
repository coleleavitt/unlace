_DWORD *__fastcall sub_96A30(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r15d
  _DWORD *v7; // rbx
  __int64 v9; // rax
  int v10; // edx
  char v11; // al
  _QWORD *v12; // r8
  _DWORD *v14; // rax
  _DWORD *v15; // r8
  int v16; // eax
  __int64 v17; // [rsp+0h] [rbp-78h]
  _DWORD *v18; // [rsp+0h] [rbp-78h]
  __int64 v19; // [rsp+8h] [rbp-70h]
  unsigned int v21; // [rsp+18h] [rbp-60h]
  char v22; // [rsp+1Ch] [rbp-5Ch]
  _QWORD v23[11]; // [rsp+20h] [rbp-58h] BYREF

  v22 = a6;
  v23[3] = __readfsqword(0x28u);
  v6 = (a6 + 7) >> 3;
  if ( v6 > a3[1] )
    return nullptr;
  v7 = a3;
  while ( 1 )
  {
    v9 = *a2;
    v10 = *(_DWORD *)(a5 + 4);
    v23[1] = 0;
    v17 = v9;
    v23[0] = 0xFFFFFFFF00000000LL;
    v21 = v10;
    if ( v10 > v7[1] )
      break;
    if ( v7 )
    {
      v12 = v7;
      goto LABEL_5;
    }
LABEL_9:
    sub_11CDA0(v23);
    v14 = (_DWORD *)sub_129440(a1, v7, a2, 0);
    v15 = v14;
    if ( !v14 )
      return nullptr;
    v16 = *v14;
    switch ( v16 )
    {
      case 9:
        goto LABEL_14;
      case 20:
        v18 = v15;
        if ( !(unsigned __int8)sub_11FD80(v15 + 12, v23, 1) || v23[0] < (unsigned __int64)((1 << v22) - 1) )
          return nullptr;
        v7 = v18 + 8;
        if ( v18[9] < v6 )
          return nullptr;
        break;
      case 4:
LABEL_14:
        if ( v15[9] < v6 )
          return nullptr;
        v7 = v15 + 8;
        break;
      default:
        return nullptr;
    }
  }
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_125180(v23);
  v11 = sub_131780(v23, v19, v21, 0, 0);
  v12 = v23;
  if ( !v11 )
    goto LABEL_9;
LABEL_5:
  if ( !(unsigned __int8)sub_130BC0(a1, a4, a5, v17, v12, 0) )
    goto LABEL_9;
  sub_11CDA0(v23);
  if ( v6 > v7[1] )
    return nullptr;
  return v7;
}
