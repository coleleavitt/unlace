void __fastcall sub_3E9230(__int64 a1, __int64 a2, double a3)
{
  int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int16 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebp
  __int64 v25; // rbx
  __int64 v26; // r14
  _DWORD *v27; // rdi
  __int64 (__fastcall *v28)(_DWORD *, unsigned int); // rax
  __int64 v29; // r12
  int *v30; // rax
  int v31; // edx
  int v32; // eax
  __int64 v33; // [rsp-10h] [rbp-68h]
  __int64 v34; // [rsp-10h] [rbp-68h]
  __int64 v35; // [rsp-8h] [rbp-60h]
  __int64 v36; // [rsp+0h] [rbp-58h]
  int v37; // [rsp+Ch] [rbp-4Ch]
  int v38; // [rsp+10h] [rbp-48h]
  int v39; // [rsp+14h] [rbp-44h]
  __int64 v40; // [rsp+18h] [rbp-40h]

  v3 = *(unsigned __int16 *)(a2 + 26) + 1 - *(unsigned __int16 *)(a2 + 24);
  if ( v3 > 0 )
  {
    v4 = a1;
    v5 = *(_QWORD *)(a1 + 832);
    v6 = *(_WORD *)(a1 + 48);
    v7 = *(_QWORD *)(v5 + 584);
    if ( !v7 )
      goto LABEL_25;
    v8 = a2;
    v9 = *(int *)(*(_QWORD *)(v5 + 576) + 4 * v7 - 4);
    *(_QWORD *)(v5 + 584) = v7 - 1;
    v38 = v9;
    sub_1D14D0(
      a1,
      3u,
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) * v3,
      0x3BEA45E214ADDC55LL,
      v9,
      0);
    v10 = *(_QWORD *)(a1 + 832);
    a2 = v35;
    v11 = *(_QWORD *)(v10 + 584);
    if ( !v11 )
      goto LABEL_25;
    v12 = *(int *)(*(_QWORD *)(v10 + 576) + 4 * v11 - 4);
    *(_QWORD *)(v10 + 584) = v11 - 1;
    v13 = *(_QWORD *)(a1 + 832);
    v37 = v12;
    v14 = *(int *)(v13 + 60);
    v15 = *(_DWORD *)(v13 + 84);
    if ( v6 == 214 )
    {
      a2 = 4;
      sub_3E8420(a1, 4u, v15, v14, 0x3BEA45E214ADDC55LL, v12, 0);
    }
    else
    {
      a2 = 13;
      sub_3E8420(a1, 0xDu, v15, v14, v9, v12, 0);
    }
    v16 = *(_QWORD *)(a1 + 832);
    v17 = *(_QWORD *)(v16 + 584);
    if ( !v17 )
LABEL_25:
      sub_3E4140(a3, a1, a2);
    v18 = *(int *)(*(_QWORD *)(v16 + 576) + 4 * v17 - 4);
    *(_QWORD *)(v16 + 584) = v17 - 1;
    v39 = v18;
    v36 = v18;
    sub_1D14D0(
      a1,
      3u,
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
      *(int *)(*(_QWORD *)(a1 + 832) + 80LL),
      0x3BEA45E214ADDC55LL,
      v18,
      0);
    v22 = v33;
    if ( *(_WORD *)(v8 + 26) >= *(_WORD *)(v8 + 24) )
    {
      v40 = v9;
      v23 = *(unsigned __int16 *)(v8 + 24);
      v25 = v8;
      v26 = v12;
      do
      {
        while ( 1 )
        {
          v27 = *(_DWORD **)(a1 + 832);
          v28 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v27 + 168LL);
          if ( v28 == sub_3E40F0 )
          {
            if ( (unsigned int)v23 > 0x1F )
            {
              if ( v23 == 48 )
                v29 = (int)v27[120];
              else
                v29 = v23 == 49 ? (int)v27[121] : -1LL;
            }
            else
            {
              v29 = v27[88] + v23 * v27[20];
            }
          }
          else
          {
            v32 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, __int64, __int64, __int64))v28)(
                    v27,
                    (unsigned int)v23,
                    v19,
                    v20,
                    v21,
                    v22);
            v27 = *(_DWORD **)(a1 + 832);
            v29 = v32;
          }
          sub_3E8420(a1, 0xDu, v27[21], v26, v36, v26, 0);
          v30 = *(int **)(a1 + 832);
          v31 = v30[20];
          if ( v6 != 214 )
            break;
          ++v23;
          sub_3E8420(a1, 1u, v31, v29, v30[16], v26, v30[21]);
          v20 = v34;
          if ( *(unsigned __int16 *)(v25 + 26) < v23 )
            goto LABEL_15;
        }
        ++v23;
        sub_3E8420(a1, 2u, v31, v30[16], v26, v29, v30[21]);
        v19 = v35;
      }
      while ( *(unsigned __int16 *)(v25 + 26) >= v23 );
LABEL_15:
      v9 = v40;
      v4 = a1;
    }
    sub_3E62F0(*(_QWORD *)(v4 + 832), v39);
    sub_3E62F0(*(_QWORD *)(v4 + 832), v37);
    sub_3E8420(
      v4,
      (v6 == 214) + 12,
      *(_DWORD *)(*(_QWORD *)(v4 + 832) + 84LL),
      *(int *)(*(_QWORD *)(v4 + 832) + 60LL),
      v9,
      *(int *)(*(_QWORD *)(v4 + 832) + 60LL),
      0);
    sub_3E62F0(*(_QWORD *)(v4 + 832), v38);
  }
}
