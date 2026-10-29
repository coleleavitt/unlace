signed __int64 __fastcall sub_B500A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  signed __int64 *v20; // rbp
  signed __int64 v21; // rax

  v5 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v5;
  if ( *(_BYTE *)(*v5 + 16LL) == 48
    && *(char *)(sub_F3D1D0(*v5, a2, a3, a4, a5) + 74) < 0
    && (v9 = sub_B4F900(a1), v10 = sub_BD7CB0(v9), (*(_WORD *)v10 & 0x1FF) == 0x35)
    && (v11 = *(_QWORD *)(v10 + 16), v12 = (*(_QWORD *)(v10 + 24) - v11) >> 3, (_DWORD)v12)
    && (v13 = sub_A4E300(a2, *(_QWORD *)(*(_QWORD *)(v11 + 8LL * (unsigned int)(v12 - 1)) + 8LL))) != 0
    && (unsigned int)*(unsigned __int8 *)(v13 + 16) - 2 <= 1
    && (v14 = v13,
        v15 = sub_A8A730((__int64)a2, v13),
        v19 = sub_F3D1D0(v6, v14, v16, v17, v18),
        v20 = (signed __int64 *)sub_EBA840(a2, v19),
        v21 = v15 + sub_A742B0((__int64)a2, *(_QWORD *)(v20[6] + 8LL * ((unsigned int)((v20[7] - v20[6]) >> 3) - 1))),
        *v20 <= v21) )
  {
    return v21 - *v20;
  }
  else
  {
    return 0;
  }
}

