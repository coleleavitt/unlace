__int64 __fastcall sub_3B80(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 *v8; // rax
  __int64 v9; // rbx
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 *v15; // rax
  __int64 v16; // rbx
  unsigned int v17; // eax
  _DWORD *v18; // rdx
  char v19; // al
  __int64 *v20; // rdx
  __int64 *v21; // rdx

  if ( !(unsigned __int8)getinf_flag() )
    return 0;
  if ( a2 == 64 )
  {
    v11 = *a3;
    if ( *a3 > 0x2F )
    {
      v21 = (__int64 *)*((_QWORD *)a3 + 1);
      v15 = v21 + 1;
      *((_QWORD *)a3 + 1) = v21 + 1;
      v14 = *v21;
    }
    else
    {
      v12 = *((_QWORD *)a3 + 2);
      v13 = v11 + 8;
      *a3 = v13;
      v14 = *(_QWORD *)(v12 + v11);
      if ( (unsigned int)v13 <= 0x2F )
      {
        v15 = (__int64 *)(v13 + v12);
        *a3 = v11 + 16;
LABEL_14:
        v16 = *v15;
        if ( (unsigned __int8)is_mapped() && (unsigned __int8)is_mapped() )
        {
          sub_FF10(a1);
          sub_A400(a1, v14, v16);
          sub_F240(a1, v14, v16);
        }
        return 0;
      }
      v15 = (__int64 *)*((_QWORD *)a3 + 1);
    }
    *((_QWORD *)a3 + 1) = v15 + 1;
    goto LABEL_14;
  }
  if ( a2 != 70 )
  {
    if ( a2 != 30 )
      return 0;
    v4 = *a3;
    if ( *a3 > 0x2F )
    {
      v20 = (__int64 *)*((_QWORD *)a3 + 1);
      v8 = v20 + 1;
      *((_QWORD *)a3 + 1) = v20 + 1;
      v7 = *v20;
    }
    else
    {
      v5 = *((_QWORD *)a3 + 2);
      v6 = v4 + 8;
      *a3 = v6;
      v7 = *(_QWORD *)(v5 + v4);
      if ( (unsigned int)v6 <= 0x2F )
      {
        v8 = (__int64 *)(v6 + v5);
        *a3 = v4 + 16;
        goto LABEL_8;
      }
      v8 = (__int64 *)*((_QWORD *)a3 + 1);
    }
    *((_QWORD *)a3 + 1) = v8 + 1;
LABEL_8:
    v9 = *v8;
    if ( *v8 )
    {
      sub_FF10(a1);
      sub_8C80(a1, v7, v9);
      sub_ED00(a1, v7, v9);
    }
    return 0;
  }
  v17 = *a3;
  if ( *a3 > 0x2F )
  {
    v18 = (_DWORD *)*((_QWORD *)a3 + 1);
    *((_QWORD *)a3 + 1) = v18 + 2;
  }
  else
  {
    v18 = (_DWORD *)(*((_QWORD *)a3 + 2) + v17);
    *a3 = v17 + 8;
  }
  if ( *v18 == 200 )
  {
    v19 = *(_BYTE *)(a1 + 360);
    *(_BYTE *)(a1 + 360) = 0;
    if ( v19 )
    {
      nullsub_1(a1, 2);
      sub_7B80(a1);
    }
  }
  return 0;
}
