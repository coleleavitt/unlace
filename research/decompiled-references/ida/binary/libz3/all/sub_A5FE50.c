void __fastcall sub_A5FE50(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbp
  int *v5; // rbp
  char v6; // al
  char v7; // r13
  __int64 v8; // rax
  signed int v9; // r10d
  __int64 v10; // rax
  signed int v11; // eax
  __int64 v12; // rax
  __int64 *v13; // rdx
  char v14; // bp
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned int v20; // [rsp+0h] [rbp-88h]
  unsigned int v21; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v22; // [rsp+10h] [rbp-78h] BYREF
  __int64 v23; // [rsp+18h] [rbp-70h]
  _QWORD v24[4]; // [rsp+20h] [rbp-68h] BYREF
  char v25; // [rsp+40h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 400);
  v21 = a2;
  if ( *(_BYTE *)(v2 + 16) )
  {
    if ( *(_DWORD *)(a1 + 1020) < *(_DWORD *)(v2 + 96) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * a2);
      if ( !*(_DWORD *)(v4 + 48) )
      {
        v5 = (int *)(v4 + 16);
        v6 = sub_98B380(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2));
        v24[0] = 0;
        v24[1] = 0;
        v7 = v6;
        v24[2] = 1;
        v24[3] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v24, v5);
        v25 = v7;
        v8 = sub_A2F020(a1 + 1352, (__int64)v24);
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 + 48);
          v10 = *(_QWORD *)(a1 + 32);
          if ( v10 )
            v11 = *(_DWORD *)(v10 - 4);
          else
            v11 = 0;
          if ( v9 < v11 )
          {
            v20 = v9;
            if ( sub_9B2ED0(a1, v9)
              && sub_3ED680((__int64)qword_1C7F2C0, *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v20) + 16LL, (__int64)v5) )
            {
              v12 = *(_QWORD *)(a1 + 32);
              v13 = *(__int64 **)(v12 + 8LL * a2);
              if ( v13[1] != *(_QWORD *)(*(_QWORD *)(v12 + 8LL * v20) + 8LL) )
              {
                v14 = sub_98B380(*v13);
                if ( v14 == (unsigned __int8)sub_98B380(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v20)) )
                {
                  v15 = *(unsigned int *)(a1 + 1224);
                  v22 = a1;
                  v23 = a1 + 48 * v15 + 1080;
                  sub_998560(v23);
                  v16 = *(_QWORD *)(a1 + 680);
                  ++*(_DWORD *)(a1 + 1224);
                  (*(void (__fastcall **)(_QWORD, __int64 *, int *, bool))(**(_QWORD **)(v16 + 8LL * a2) + 24LL))(
                    *(_QWORD *)(v16 + 8LL * a2),
                    &v22,
                    &qword_1C7F2A0,
                    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
                  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8LL * v20);
                  (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v17 + 24LL))(
                    v17,
                    &v22,
                    &qword_1C7F2A0,
                    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
                  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v20);
                  (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v18 + 24LL))(
                    v18,
                    &v22,
                    &qword_1C7F2A0,
                    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
                  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8LL * a2);
                  (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v19 + 24LL))(
                    v19,
                    &v22,
                    &qword_1C7F2A0,
                    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
                  ++*(_DWORD *)(a1 + 332);
                  sub_A05DC0(a1, a2, v20, (__int64)&v22);
                  --*(_DWORD *)(v22 + 1224);
                }
              }
              goto LABEL_16;
            }
          }
          sub_A5FB30(a1 + 1352, (__int64)v24);
        }
        sub_9E89C0(a1 + 1352, (__int64)v24, (int *)&v21);
LABEL_16:
        sub_25A130((char *)v24);
      }
    }
  }
}

