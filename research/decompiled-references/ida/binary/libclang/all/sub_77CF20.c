signed __int64 __fastcall sub_77CF20(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  signed __int64 *v12; // rbx
  signed __int64 v13; // rax

  v2 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *v2;
  if ( *(_BYTE *)(*v2 + 16LL) == 47
    && *(char *)(sub_B14A40(*v2) + 74) < 0
    && (v5 = sub_77BC00(a1), v6 = sub_80F230(v5), (*(_WORD *)v6 & 0x1FF) == 0x36)
    && (v7 = *(_QWORD *)(v6 + 16), v8 = (*(_QWORD *)(v6 + 24) - v7) >> 3, (_DWORD)v8)
    && (v9 = sub_6D9A50(a2, *(_QWORD *)(*(_QWORD *)(v7 + 8LL * (unsigned int)(v8 - 1)) + 8LL))) != 0
    && (unsigned __int8)(*(_BYTE *)(v9 + 16) - 2) <= 1u
    && (v10 = sub_70DA50((__int64)a2, v9),
        v11 = sub_B14A40(v3),
        v12 = (signed __int64 *)sub_AB4240(a2, v11),
        v13 = v10 + sub_70CF80((__int64)a2, *(_QWORD *)(v12[6] + 8LL * ((unsigned int)((v12[7] - v12[6]) >> 3) - 1))),
        *v12 <= v13) )
  {
    return v13 - *v12;
  }
  else
  {
    return 0;
  }
}

