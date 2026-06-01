void __fastcall sub_A62F40(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int *v4; // rbp
  char v5; // al
  char v6; // r12
  __int64 v7; // rax
  signed int v8; // r10d
  __int64 v9; // rax
  signed int v10; // eax
  __int64 v11; // rax
  __int64 *v12; // rdx
  char v13; // bp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned int v19; // [rsp+0h] [rbp-88h]
  unsigned int v20; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h]
  _QWORD v23[4]; // [rsp+20h] [rbp-68h] BYREF
  char v24; // [rsp+40h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 336);
  v20 = a2;
  if ( *(_BYTE *)(v2 + 16) && *(_DWORD *)(a1 + 924) < *(_DWORD *)(v2 + 96) )
  {
    v4 = (int *)(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * a2) + 16LL);
    v5 = sub_98B380(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2));
    v23[0] = 0;
    v23[1] = 0;
    v6 = v5;
    v23[2] = 1;
    v23[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v23, v4);
    v24 = v6;
    v7 = sub_A2F020(a1 + 1256, (__int64)v23);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 48);
      v9 = *(_QWORD *)(a1 + 32);
      if ( v9 )
        v10 = *(_DWORD *)(v9 - 4);
      else
        v10 = 0;
      if ( v8 < v10 )
      {
        v19 = v8;
        if ( sub_99A460(a1, v8)
          && sub_3ED680((__int64)qword_1C7F2C0, *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * v19) + 16LL, (__int64)v4) )
        {
          v11 = *(_QWORD *)(a1 + 32);
          v12 = *(__int64 **)(v11 + 8LL * a2);
          if ( v12[1] != *(_QWORD *)(*(_QWORD *)(v11 + 8LL * v19) + 8LL) )
          {
            v13 = sub_98B380(*v12);
            if ( v13 == (unsigned __int8)sub_98B380(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v19)) )
            {
              v14 = *(unsigned int *)(a1 + 1128);
              v21 = a1;
              v22 = a1 + 48 * v14 + 984;
              sub_99F980(v22);
              v15 = *(_QWORD *)(a1 + 616);
              ++*(_DWORD *)(a1 + 1128);
              (*(void (__fastcall **)(_QWORD, __int64 *, int *, bool))(**(_QWORD **)(v15 + 8LL * a2) + 24LL))(
                *(_QWORD *)(v15 + 8LL * a2),
                &v21,
                &qword_1C7F2A0,
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
              v16 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * v19);
              (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v16 + 24LL))(
                v16,
                &v21,
                &qword_1C7F2A0,
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
              v17 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * v19);
              (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v17 + 24LL))(
                v17,
                &v21,
                &qword_1C7F2A0,
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
              v18 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * a2);
              (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v18 + 24LL))(
                v18,
                &v21,
                &qword_1C7F2A0,
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
              ++*(_DWORD *)(a1 + 268);
              sub_A092C0(a1, a2, v19, (__int64)&v21);
              --*(_DWORD *)(v21 + 1128);
            }
          }
          goto LABEL_10;
        }
      }
      sub_A5FB30(a1 + 1256, (__int64)v23);
    }
    sub_9E89C0(a1 + 1256, (__int64)v23, (int *)&v20);
LABEL_10:
    sub_25A130((char *)v23);
  }
}

