__int64 __fastcall sub_1FAACD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rdx
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // [rsp+0h] [rbp-38h]
  __int64 v21[6]; // [rsp+8h] [rbp-30h] BYREF

  result = *(_QWORD *)(a1 + 48);
  v21[0] = a2;
  if ( !result || !*(_BYTE *)(result + 9267) )
  {
    result = *(_BYTE *)(v21[0] + 8) & 0x7F;
    if ( (*(_BYTE *)(v21[0] + 8) & 0x7F) != 0 )
    {
      if ( (_BYTE)result != 24
        || (*(_WORD *)(a3 + 30) & 0x180) != 0
        || (result = *(_BYTE *)(a3 + 28) & 0x7F, (_BYTE)result == 71) )
      {
        if ( *(char *)(a3 + 29) >= 0 )
        {
          v6 = sub_B8C1B0(v21[0]);
          v11 = v6;
          if ( *(char *)(v6 + 29) < 0 || (v12 = (_QWORD *)sub_B8C330(v6), result = sub_AA81B0(v12), v11 == result) )
          {
            if ( (unsigned __int8)sub_1FAA800(a1 + 2528, v21, v7, v8, v9, v10)
              && *(char *)(sub_B8C1B0(v21[0]) + 29) >= 0 )
            {
              v14 = sub_B8E970(v21[0]);
              v15 = *(unsigned int *)(a1 + 2704);
              if ( v14 )
              {
                v16 = v14;
                v17 = 0;
                do
                {
                  ++v17;
                  v16 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                while ( v16 );
                v13 = *(unsigned int *)(a1 + 2708);
                v18 = v15 + v17;
                if ( v15 + v17 > v13 )
                {
                  v20 = v14;
                  sub_2237220(a1 + 2696, a1 + 2712, v18, 8);
                  v18 = *(unsigned int *)(a1 + 2704);
                  v14 = v20;
                  v19 = (unsigned __int64 *)(*(_QWORD *)(a1 + 2696) + 8 * v18);
                  LODWORD(v18) = v17 + v18;
                  v13 = *(unsigned int *)(a1 + 2708);
                }
                else
                {
                  v19 = (unsigned __int64 *)(*(_QWORD *)(a1 + 2696) + 8 * v15);
                }
                do
                {
                  *v19++ = v14;
                  v14 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                while ( v14 );
              }
              else
              {
                v13 = *(unsigned int *)(a1 + 2708);
                if ( v15 <= v13 )
                {
                  LODWORD(v18) = *(_DWORD *)(a1 + 2704);
                }
                else
                {
                  sub_2237220(a1 + 2696, a1 + 2712, *(unsigned int *)(a1 + 2704), 8);
                  LODWORD(v18) = *(_DWORD *)(a1 + 2704);
                  v13 = *(unsigned int *)(a1 + 2708);
                }
              }
              result = (unsigned int)v18;
              *(_DWORD *)(a1 + 2704) = v18;
            }
            else
            {
              result = *(unsigned int *)(a1 + 2704);
              v13 = *(unsigned int *)(a1 + 2708);
            }
            if ( v13 < result + 1 )
            {
              sub_2237220(a1 + 2696, a1 + 2712, result + 1, 8);
              result = *(unsigned int *)(a1 + 2704);
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 2696) + 8 * result) = a3;
            ++*(_DWORD *)(a1 + 2704);
          }
        }
      }
    }
  }
  return result;
}
