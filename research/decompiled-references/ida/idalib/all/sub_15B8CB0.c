__int64 __fastcall sub_15B8CB0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v22; // rdx

  v9 = *(_QWORD *)(a3 + 32);
  v10 = (__int64 *)(sub_15B8230(a2, v9, a3, a4, a5, a6) & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v10 )
    goto LABEL_9;
  v14 = v10;
  v15 = *v10;
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (_BYTE)v16 == 42 )
    goto LABEL_3;
  v11 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 42 )
  {
    v15 = sub_F63050(v15, v9, v16, v11);
    if ( v15 )
    {
LABEL_3:
      v15 = *(_QWORD *)(*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      LODWORD(v16) = *(unsigned __int8 *)(v15 + 16);
      goto LABEL_4;
    }
    v15 = *v14;
    LODWORD(v16) = *(unsigned __int8 *)(*v14 + 16);
  }
LABEL_4:
  v17 = (unsigned int)(v16 - 25);
  if ( (unsigned int)v17 <= 1
    || (v22 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25,
        (unsigned int)v22 <= 1)
    && (v15 = sub_F63050(v15, v9, v22, v11)) != 0 )
  {
    v18 = sub_15B7A90((__int64)a2, *(_QWORD *)(v15 + 24), v17, v11, v12, v13);
    if ( v18 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)a1 = 0;
      v19 = (_QWORD *)operator new(8u);
      v20 = v19 + 1;
      *v19 = v18;
      *(_QWORD *)a1 = v19;
      *(_QWORD *)(a1 + 16) = v20;
      *(_QWORD *)(a1 + 8) = v20;
      return a1;
    }
  }
LABEL_9:
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  return a1;
}
