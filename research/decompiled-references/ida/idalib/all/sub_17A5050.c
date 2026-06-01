void __fastcall sub_17A5050(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // [rsp+0h] [rbp-4Ch] BYREF
  __int64 (__fastcall **v13)(); // [rsp+4h] [rbp-48h] BYREF
  int v14; // [rsp+Ch] [rbp-40h]
  int *v15; // [rsp+14h] [rbp-38h]

  if ( a2 )
  {
    if ( *(char *)(a2 + 28) >= 0 )
    {
      v2 = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (unsigned int)v2 - 40 <= 6 )
      {
        if ( v2 == 46 )
        {
          v5 = (__int64 *)(a2 + 104);
          v6 = a2 + 104 + 8LL * *(unsigned int *)(a2 + 100);
          if ( v6 != a2 + 104 )
          {
            do
            {
              v7 = *v5++;
              sub_B88650(v7, 1);
            }
            while ( (__int64 *)v6 != v5 );
          }
        }
        v8 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        if ( v8 && (*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v8 + 17) & 4) == 0
          || (v9 = *(_QWORD *)(a2 + 48), (*(_BYTE *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0)
          && ((v10 = sub_A71450(*(_QWORD *)(a1 + 248), *(_QWORD *)(a2 + 48)),
               (unsigned __int8)sub_1E63CF0(a1, *(unsigned int *)(a2 + 24), v10, 1, 5261))
           || (v11 = *(unsigned int *)(a2 + 24),
               v12 = 2,
               v14 = 2872,
               v13 = off_2BC6948,
               v15 = &v12,
               (unsigned __int8)sub_1866EA0(a1, v11, v9, &v13))) )
        {
          sub_B88650(a2, 1);
        }
      }
    }
  }
}
