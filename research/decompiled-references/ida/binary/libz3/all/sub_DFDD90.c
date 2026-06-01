__int64 __fastcall sub_DFDD90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  __int64 v6; // rbp
  _DWORD *v7; // r12
  bool v8; // zf
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r14
  int v16; // esi
  __int64 result; // rax
  unsigned int v18; // [rsp+0h] [rbp-C8h]
  _BYTE v21[8]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-98h] BYREF
  int *v23; // [rsp+40h] [rbp-88h] BYREF
  int v24; // [rsp+48h] [rbp-80h]
  __int128 v25; // [rsp+50h] [rbp-78h]
  __int128 v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+70h] [rbp-58h]
  __int16 v28; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+80h] [rbp-48h]

  v5 = *(_DWORD *)(a1 + 116);
  v6 = *(_QWORD *)(a1 + 864);
  v18 = *(_DWORD *)(a1 + 112);
  if ( v6 )
    ++*(_DWORD *)(v6 + 48);
  v7 = *(_DWORD **)(a1 + 872);
  if ( v7 && (v8 = v7[12] == 1, --v7[12], v8) )
  {
    (**(void (__fastcall ***)(_DWORD *))v7)(v7);
    sub_186B220(v7);
    v9 = *(__int64 **)(a1 + 864);
  }
  else
  {
    v9 = (__int64 *)v6;
  }
  v10 = *v9;
  *(_QWORD *)(a1 + 872) = v6;
  (*(void (__fastcall **)(__int64 *, __int64))(v10 + 224))(v9, a1);
  sub_DFBCB0(a1);
  v11 = *(_QWORD *)(a1 + 296);
  v28 = 0;
  v24 = 0;
  v23 = &off_1C4C9C8;
  v27 = 0;
  v29 = v11;
  v25 = 0;
  v26 = 0;
  sub_18086F0(v22, &v23, 1);
  sub_18561B0((unsigned int)v21, v5, (unsigned int)&v23, v12, v13, v14);
  sub_DFBCB0(a1);
  v15 = *(_QWORD *)(a1 + 296);
  sub_1829790(v15, v18);
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 864) + 264LL))(
          *(_QWORD *)(a1 + 864),
          a2,
          a3,
          a4);
  *(_DWORD *)(*(_QWORD *)(a1 + 864) + 52LL) = v16;
  sub_DFDC60((_QWORD *)a1, v16);
  sub_1829100(v15);
  sub_1856400(v21);
  sub_1808900(v22);
  v23 = &off_1C4C9C8;
  result = (unsigned __int8)v28;
  if ( (_BYTE)v28 )
    result = sub_18296D0(v29);
  if ( HIBYTE(v28) )
    sub_1829760(v29);
  return result;
}

