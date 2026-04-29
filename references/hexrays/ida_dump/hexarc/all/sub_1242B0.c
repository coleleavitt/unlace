__int64 __fastcall sub_1242B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  _DWORD *v6; // rdi
  int v8; // ebp
  char v9; // al
  __int16 v10; // ax
  __int16 v11; // dx
  __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rax
  unsigned __int8 *v15; // rbx
  __int64 v16; // r12
  int v17; // [rsp+Ch] [rbp-5Ch]
  int v18; // [rsp+10h] [rbp-58h] BYREF
  int v19; // [rsp+14h] [rbp-54h]
  __int64 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 10 )
    return 0;
  if ( *(_BYTE *)(a1 + 32) != 4 )
    return 0;
  v6 = *(_DWORD **)(a1 + 40);
  if ( (unsigned int)(*v6 - 23) > 1 )
    return 0;
  v4 = sub_14BF70(v6, &v18);
  if ( !(_BYTE)v4 || (v18 & 7) != 0 )
    return 0;
  v8 = v18 / 8;
  v17 = v8;
  sub_11D380((__int64)&v18, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 32LL));
  if ( v8 + *(_DWORD *)(a1 + 68) > v19 )
  {
LABEL_14:
    sub_1166E0((__int64)&v18);
    return 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) && sub_1154D0((unsigned __int8 *)&v18) )
    v17 = v19 - v8 - *(_DWORD *)(a1 + 68);
  if ( (_BYTE)v18 == 15 )
  {
    v9 = sub_1202C0((__int64)&v18, v17, *(_DWORD *)(a1 + 68), 0);
  }
  else
  {
    if ( !(unsigned __int8)sub_120850((unsigned __int64)&v18, a2, v17) )
      goto LABEL_14;
    v9 = sub_120BF0((unsigned __int64)&v18, a2, *(_DWORD *)(a1 + 68));
  }
  if ( !v9 )
    goto LABEL_14;
  v10 = *(_WORD *)(a3 + 32);
  v11 = v18;
  *(_DWORD *)a3 = 4;
  *(_WORD *)(a3 + 32) = v11;
  LOWORD(v18) = v10;
  v12 = *(_WORD *)(a3 + 34);
  *(_WORD *)(a3 + 34) = HIWORD(v18);
  HIWORD(v18) = v12;
  v13 = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a3 + 36) = v19;
  v19 = v13;
  v14 = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a3 + 40) = v20;
  v20 = v14;
  if ( a1 != a3 )
  {
    v15 = (unsigned __int8 *)(a1 + 64);
    v16 = a3 + 64;
    if ( v15 != (unsigned __int8 *)v16 )
    {
      sub_1166E0(v16);
      sub_11D380(v16, v15);
    }
  }
  sub_1166E0((__int64)&v18);
  return v4;
}
