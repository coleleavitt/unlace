__int64 __fastcall sub_207F4D0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int8 v7; // cl
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // r10
  _QWORD *v11; // r8
  _QWORD *v12; // r11
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  _QWORD *v21; // rdi
  __int64 v22; // [rsp+10h] [rbp-D8h] BYREF
  int v23; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+30h] [rbp-B8h]
  __int64 v27; // [rsp+38h] [rbp-B0h]
  int v28; // [rsp+40h] [rbp-A8h]
  int v29; // [rsp+44h] [rbp-A4h]
  __int64 v30; // [rsp+48h] [rbp-A0h] BYREF
  int v31; // [rsp+50h] [rbp-98h]
  __int64 v32; // [rsp+58h] [rbp-90h]
  __int64 v33; // [rsp+60h] [rbp-88h] BYREF
  __int64 v34; // [rsp+68h] [rbp-80h]
  __int64 v35; // [rsp+70h] [rbp-78h]
  __int64 v36; // [rsp+78h] [rbp-70h]
  __int64 v37; // [rsp+80h] [rbp-68h]
  __int64 v38; // [rsp+88h] [rbp-60h]
  __int64 v39; // [rsp+90h] [rbp-58h]
  __int64 v40; // [rsp+98h] [rbp-50h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-48h]
  int v42; // [rsp+A8h] [rbp-40h]
  __int64 v43; // [rsp+B0h] [rbp-38h]

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    if ( (v7 & 2) != 0 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 16LL);
      if ( *(_BYTE *)v5 == 16 )
        v22 = *a2;
      else
        v22 = **(_QWORD **)(v5 - 32);
      v23 = *(_DWORD *)(v5 + 16);
      v24 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 8LL);
      v25 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 40LL);
      v26 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 24LL);
      v27 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 32LL);
      if ( *(_WORD *)(v5 + 2) == 17152 )
        v28 = 0;
      else
        v28 = *(_DWORD *)(v5 + 4);
      v29 = *(_DWORD *)(v5 + 20);
      v30 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 48LL);
      v31 = *(_DWORD *)(v5 + 28);
      v32 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 56LL);
      v33 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 64LL);
      v34 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 72LL);
      v35 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 80LL);
      v36 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 88LL);
      v37 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 96LL);
      v38 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 104LL);
      v39 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 112LL);
      v40 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 120LL);
      v41 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 128LL);
      v42 = *(_DWORD *)(v5 + 24);
      v9 = *(_QWORD **)(v5 - 32);
    }
    else
    {
      v10 = -16 - 8LL * ((v7 >> 2) & 0xF);
      v11 = (_QWORD *)(v5 + v10);
      v8 = *(_QWORD *)(v5 - 8LL * ((v7 >> 2) & 0xF));
      if ( *(_BYTE *)v5 == 16 )
      {
        v22 = *a2;
        v23 = *(_DWORD *)(v5 + 16);
      }
      else
      {
        v22 = *(_QWORD *)(v5 + v10);
        v23 = *(_DWORD *)(v5 + 16);
        v7 = *(_BYTE *)(v5 - 16);
        v11 = (_QWORD *)(v5 + -16 - 8LL * ((v7 >> 2) & 0xF));
      }
      v24 = v11[1];
      v25 = v11[5];
      v26 = v11[3];
      v27 = v11[4];
      if ( *(_WORD *)(v5 + 2) == 17152 )
        v28 = 0;
      else
        v28 = *(_DWORD *)(v5 + 4);
      v29 = *(_DWORD *)(v5 + 20);
      v30 = v11[6];
      v31 = *(_DWORD *)(v5 + 28);
      v12 = (_QWORD *)(v5 - 8LL * ((v7 >> 2) & 0xF));
      v9 = v12 - 2;
      v32 = v11[7];
      v33 = v11[8];
      v34 = v11[9];
      v35 = v12[8];
      v36 = v12[9];
      v37 = v12[10];
      v38 = v12[11];
      v39 = v12[12];
      v40 = v12[13];
      v41 = v12[14];
      v42 = *(_DWORD *)(v5 + 24);
    }
    v14 = v3 - 1;
    v43 = v9[17];
    v15 = sub_2076900(v8, &v22, &v23, &v25, &v24, &v30, &v33, &v40);
    v16 = *a2;
    v17 = v14 & v15;
    v18 = (_QWORD *)(v6 + 8LL * v17);
    v19 = *v18;
    if ( *v18 == v16 )
    {
LABEL_25:
      *a3 = v18;
      return 1;
    }
    else
    {
      if ( v19 != -4096 )
      {
        v20 = 1;
        v21 = nullptr;
        while ( 1 )
        {
          if ( v19 != -8192 || v21 )
            v18 = v21;
          v17 = v14 & (v20 + v17);
          v19 = *(_QWORD *)(v6 + 8LL * v17);
          if ( v19 == v16 )
          {
            v18 = (_QWORD *)(v6 + 8LL * v17);
            goto LABEL_25;
          }
          if ( v19 == -4096 )
            break;
          ++v20;
          v21 = v18;
          v18 = (_QWORD *)(v6 + 8LL * v17);
        }
        if ( !v18 )
          v18 = (_QWORD *)(v6 + 8LL * v17);
      }
      *a3 = v18;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
