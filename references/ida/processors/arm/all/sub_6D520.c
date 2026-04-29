__int64 __fastcall sub_6D520(__int64 a1)
{
  __int16 v1; // ax
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  _QWORD *v7; // rdi
  int v8; // eax
  char **v9; // rcx
  int v10; // esi
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  int *v14; // rax
  int v15; // edx
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  unsigned int *v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _Unwind_Exception *v28; // rbx
  unsigned __int8 v29; // [rsp+Fh] [rbp-49h]
  unsigned __int8 v30; // [rsp+Fh] [rbp-49h]
  _QWORD *v31; // [rsp+10h] [rbp-48h] BYREF
  __int128 v32; // [rsp+18h] [rbp-40h]
  char v33; // [rsp+28h] [rbp-30h]
  unsigned __int64 v34; // [rsp+38h] [rbp-20h]

  v1 = *(_WORD *)(a1 + 40);
  v34 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v1 - 274) <= 1u )
  {
    v4 = *(unsigned __int16 *)(a1 + 62);
    v5 = *(_QWORD *)(a1 + 32);
    v33 = 0;
    v6 = *(_QWORD *)(a1 + 888);
    v32 = 0;
    v31 = 0;
    result = sub_81F70(v6, &v31, v5, v4, 0, 0);
    v7 = v31;
    if ( (_BYTE)result )
    {
      if ( (unsigned __int8)(v33 - 10) <= 1u )
      {
        v18 = *v31;
        if ( (_QWORD)v32 == 1 || (v19 = v31 + 3, 24LL * (_QWORD)v32 == 24) )
        {
LABEL_24:
          *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v18;
          v20 = *(unsigned int **)(a1 + 376);
          v21 = *v20 & 0xFFFFFBFB;
          if ( *(_WORD *)(a1 + 40) == 274 )
            BYTE1(v21) |= 4u;
          *v20 = v21;
          v30 = result;
          sub_82740(*(_QWORD *)(a1 + 888), a1 + 840, &v31);
          v22 = *(_QWORD *)(a1 + 376);
          v23 = *(_QWORD *)(a1 + 32) + 4LL;
          *(_DWORD *)v22 |= 0x200u;
          result = v30;
          *(_QWORD *)(v22 + 56) = v23;
          v24 = *(_DWORD **)(a1 + 376);
          LODWORD(v22) = *v24 & 0xFFFFFE7F;
          LOBYTE(v22) = v22 | 0x80;
          *v24 = v22;
          LOWORD(v22) = *(unsigned __int8 *)(a1 + 88);
          *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
          *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v22;
          *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
          v25 = *(_QWORD *)(a1 + 376);
          LODWORD(v24) = *(unsigned __int8 *)(a1 + 88);
          v7 = v31;
          *(_BYTE *)(v25 + 68) = 2;
          *(_DWORD *)(v25 + 64) = (_DWORD)v24;
          goto LABEL_6;
        }
        while ( *v19 == v18 )
        {
          v19 += 3;
          if ( &v31[3 * (_QWORD)v32] == v19 )
            goto LABEL_24;
        }
      }
      result = 0;
    }
LABEL_6:
    if ( v7 )
    {
      v29 = result;
      *(_QWORD *)&v32 = 0;
      qfree((__int64)v7);
      return v29;
    }
    return result;
  }
  if ( v1 == 4 )
  {
    v8 = sub_6B290(*(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16), (const char **)&off_A4580, 5);
    if ( v8 != -1 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
      v9 = &(&off_A4580)[4 * v8];
      v10 = *((_DWORD *)v9 + 6);
      **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFE7F
                              | ((unsigned __int16)*((_DWORD *)v9 + 7) << 7) & 0x180;
      if ( v10 )
        **(_DWORD **)(a1 + 376) |= 0x2000u;
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 32) + 4LL;
      v11 = *((_DWORD *)&off_A4580 + 8 * v8 + 5);
      v12 = *(_QWORD *)(a1 + 376);
      v13 = *(_QWORD *)(v12 + 8);
      if ( v11 == 4 )
      {
        *(_QWORD *)(v12 + 8) = (v13 + 3) & 0xFFFFFFFFFFFFFFFCLL;
        v26 = *(_QWORD *)(a1 + 376);
        v27 = *(_QWORD *)(v26 + 8);
        *(_DWORD *)v26 |= 0x200u;
        *(_QWORD *)(v26 + 56) = v27;
        **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
        goto LABEL_16;
      }
      *(_DWORD *)v12 |= 0x200u;
      *(_QWORD *)(v12 + 56) = v13;
      v14 = *(int **)(a1 + 376);
      v15 = *v14;
      v16 = *v14 & 0xFFFFFBFB;
      *v14 = v16;
      if ( v11 != 2 )
      {
        if ( v11 > 2 )
        {
          if ( v11 == 8 )
          {
            *v14 = v15 | 0x404;
            goto LABEL_16;
          }
        }
        else if ( v11 == 1 )
        {
          *v14 = v16 | 0x400;
          goto LABEL_16;
        }
        v28 = (struct _Unwind_Exception *)sub_6B6A0();
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree((__int64)v31);
        }
        _Unwind_Resume(v28);
      }
LABEL_16:
      v17 = *(_QWORD *)(a1 + 376);
      *(_DWORD *)(v17 + 64) = 0;
      *(_BYTE *)(v17 + 68) = 2;
      return 1;
    }
  }
  return 0;
}
