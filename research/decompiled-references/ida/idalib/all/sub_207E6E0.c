__int64 __fastcall sub_207E6E0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // cl
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  int v13; // r9d
  __int64 v14; // rcx
  unsigned __int8 v15; // di
  __int64 v16; // rax
  int v19; // ebx
  int v20; // eax
  __int64 v21; // rsi
  unsigned int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  int v25; // r8d
  _QWORD *v26; // rdi
  int v27; // [rsp+4h] [rbp-94h] BYREF
  int *v28; // [rsp+8h] [rbp-90h] BYREF
  __int64 v29; // [rsp+10h] [rbp-88h] BYREF
  __int64 v30; // [rsp+18h] [rbp-80h] BYREF
  int v31; // [rsp+20h] [rbp-78h] BYREF
  __int64 v32; // [rsp+28h] [rbp-70h] BYREF
  __int64 v33; // [rsp+30h] [rbp-68h]
  int v34; // [rsp+38h] [rbp-60h]
  int v35; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]
  __int64 v39; // [rsp+58h] [rbp-40h]
  __int64 v40; // [rsp+60h] [rbp-38h]

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    if ( (v7 & 2) != 0 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 16LL);
      v8 = *(_DWORD *)(v5 + 16);
      if ( *(_BYTE *)v5 == 16 )
      {
        v30 = v5;
        v31 = v8;
      }
      else
      {
        v9 = **(_QWORD **)(v5 - 32);
        v31 = *(_DWORD *)(v5 + 16);
        v30 = v9;
      }
      v32 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 8LL);
      v33 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 24LL);
      if ( *(_WORD *)(v5 + 2) == 17152 )
        v34 = 0;
      else
        v34 = *(_DWORD *)(v5 + 4);
      v35 = *(_DWORD *)(v5 + 20);
      v36 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 40LL);
      v10 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 48LL);
      v37 = v10;
      v38 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 56LL);
      v39 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 64LL);
      v11 = *(_QWORD **)(v5 - 32);
    }
    else
    {
      v12 = -16 - 8LL * ((v7 >> 2) & 0xF);
      v11 = (_QWORD *)(v5 + v12);
      v29 = *(_QWORD *)(v5 + v12 + 16);
      v13 = *(_DWORD *)(v5 + 16);
      if ( *(_BYTE *)v5 == 16 )
      {
        v30 = v5;
        v31 = v13;
      }
      else
      {
        v14 = *(_QWORD *)(v5 + v12);
        v15 = *(_BYTE *)(v5 - 16);
        v31 = *(_DWORD *)(v5 + 16);
        v30 = v14;
        v11 = (_QWORD *)(v5 + -16 - 8LL * ((v15 >> 2) & 0xF));
      }
      v32 = v11[1];
      v33 = v11[3];
      if ( *(_WORD *)(v5 + 2) == 17152 )
        v34 = 0;
      else
        v34 = *(_DWORD *)(v5 + 4);
      v35 = *(_DWORD *)(v5 + 20);
      v36 = v11[5];
      v10 = v11[6];
      v37 = v10;
      v38 = v11[7];
      v39 = v11[8];
    }
    v16 = v11[9];
    v27 = 0;
    v19 = v3 - 1;
    v40 = v16;
    v28 = &v27;
    sub_206F860(&v28, v10);
    sub_206F860(&v28, v38);
    sub_206F860(&v28, v39);
    sub_206F860(&v28, v40);
    v20 = sub_2073020(v27, &v29, &v30, &v31, &v32, &v36, &v35);
    v21 = *a2;
    v22 = v19 & v20;
    v23 = (_QWORD *)(v6 + 8LL * v22);
    v24 = *v23;
    if ( *v23 == *a2 )
    {
LABEL_25:
      *a3 = v23;
      return 1;
    }
    else
    {
      if ( v24 != -4096 )
      {
        v25 = 1;
        v26 = nullptr;
        while ( 1 )
        {
          if ( v24 != -8192 || v26 )
            v23 = v26;
          v22 = v19 & (v25 + v22);
          v24 = *(_QWORD *)(v6 + 8LL * v22);
          if ( v24 == v21 )
          {
            v23 = (_QWORD *)(v6 + 8LL * v22);
            goto LABEL_25;
          }
          if ( v24 == -4096 )
            break;
          ++v25;
          v26 = v23;
          v23 = (_QWORD *)(v6 + 8LL * v22);
        }
        if ( !v23 )
          v23 = (_QWORD *)(v6 + 8LL * v22);
      }
      *a3 = v23;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
