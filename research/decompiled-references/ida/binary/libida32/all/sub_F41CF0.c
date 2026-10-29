unsigned __int64 __fastcall sub_F41CF0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 *v17; // rdi
  unsigned __int64 result; // rax

  v4 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = v4[1];
  if ( (v5 & 8) == 0
    || (a3 = v5 & 0xFFFFFFFFFFFFFFF0LL,
        result = ((*(__int64 *)((char *)&qword_18 + (v4[1] & 0xFFFFFFFFFFFFFFF0LL)) | v4[1] & 7uLL) >> 6) & 7,
        (_DWORD)result != 2)
    && (_DWORD)result != 3 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(sub_EB4140(*v4, a2, a3, a4) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v6 + 16) == 48 )
    {
      v13 = sub_F3D150(*(_QWORD **)(v6 + 24), a2, v7, v8, v9, v10);
      if ( (*((_BYTE *)v13 + 28) & 0x7Fu) - 59 > 2 )
      {
        result = 4;
        if ( (*((_BYTE *)v13 + 75) & 0x40) == 0 )
          return 0;
        return result;
      }
      v16 = v13[13];
      v17 = (__int64 *)(v16 + 96);
      if ( v13[16] )
      {
LABEL_5:
        sub_6E4DB0(v17, v16, v11, v12, v14, v15);
        return (*(_WORD *)(v13[16] + 4LL) & 0x1000) == 0;
      }
      sub_6E4DB0(v17, v16, v11, v12, v14, v15);
      if ( v13[16] )
      {
        v16 = v13[13];
        v17 = (__int64 *)(v16 + 96);
        goto LABEL_5;
      }
    }
    return 0;
  }
  return result;
}

