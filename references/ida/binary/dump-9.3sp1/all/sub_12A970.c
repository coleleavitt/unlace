__int64 __fastcall sub_12A970(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  _DWORD *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // rcx
  char v12; // al
  __int16 v13; // ax
  __int16 v14; // dx
  __int16 v15; // ax
  int v16; // eax
  __int64 v17; // rax
  unsigned __int8 *v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // [rsp+Ch] [rbp-5Ch]
  int v23; // [rsp+10h] [rbp-58h] BYREF
  int v24; // [rsp+14h] [rbp-54h]
  __int64 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 10 )
    return 0;
  if ( *(_BYTE *)(a1 + 32) != 4 )
    return 0;
  v6 = *(_DWORD **)(a1 + 40);
  if ( (unsigned int)(*v6 - 23) > 1 )
    return 0;
  v4 = sub_152630(v6, &v23);
  if ( !(_BYTE)v4 || (v23 & 7) != 0 )
    return 0;
  v10 = v23 / 8;
  v22 = v10;
  sub_123A40((__int64)&v23, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 32LL), v8, v9);
  if ( v10 + *(_DWORD *)(a1 + 68) > v24 )
  {
LABEL_14:
    sub_11CDA0((__int64)&v23);
    return 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) && sub_11BB90((unsigned __int8 *)&v23) )
    v22 = v24 - v10 - *(_DWORD *)(a1 + 68);
  if ( (_BYTE)v23 == 15 )
  {
    v12 = sub_126980((__int64)&v23, v22, *(_DWORD *)(a1 + 68), 0);
  }
  else
  {
    if ( !(unsigned __int8)sub_126F10((unsigned __int64)&v23, a2, v22, v11) )
      goto LABEL_14;
    v12 = sub_1272B0((unsigned __int64)&v23, a2, *(_DWORD *)(a1 + 68), 0);
  }
  if ( !v12 )
    goto LABEL_14;
  v13 = *(_WORD *)(a3 + 32);
  v14 = v23;
  *(_DWORD *)a3 = 4;
  *(_WORD *)(a3 + 32) = v14;
  LOWORD(v23) = v13;
  v15 = *(_WORD *)(a3 + 34);
  *(_WORD *)(a3 + 34) = HIWORD(v23);
  HIWORD(v23) = v15;
  v16 = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a3 + 36) = v24;
  v24 = v16;
  v17 = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a3 + 40) = v25;
  v25 = v17;
  if ( a1 != a3 )
  {
    v18 = (unsigned __int8 *)(a1 + 64);
    v19 = a3 + 64;
    if ( v18 != (unsigned __int8 *)v19 )
    {
      sub_11CDA0(v19);
      sub_123A40(v19, v18, v20, v21);
    }
  }
  sub_11CDA0((__int64)&v23);
  return v4;
}
