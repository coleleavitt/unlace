void __fastcall sub_185C490(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 **v9; // rax
  __int64 *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // r13
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // r14
  __int64 *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v24[200]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *(_QWORD *)(a1 + 248);
  v22 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 17448) + 340LL) == 10 )
  {
    v3 = sub_B8E970(a2 + 64);
    if ( v3 )
    {
      v4 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v3 + 28) & 0x7F) != 0x26 || !sub_B98FC0(v3, a2) || (*(_BYTE *)(v3 + 29) & 1) == 0 )
          goto LABEL_12;
        v9 = (__int64 **)sub_B8C3D0(v3, a2, v5, v6, v7, v8);
        v10 = *v9;
        v11 = (unsigned __int64)&(*v9)[*((unsigned int *)v9 + 2)];
        if ( (unsigned __int64)v10 >= v11 )
        {
          if ( v10 == (__int64 *)v11 )
          {
LABEL_12:
            v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v3 )
              return;
          }
          else
          {
            if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 195 )
              goto LABEL_15;
            v17 = (__int64 *)(v11 + 8);
            while ( v10 != v17 )
            {
              v18 = *v17++;
              if ( *(_WORD *)(v18 + 36) == 195 )
                goto LABEL_15;
            }
            v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v3 )
              return;
          }
        }
        else
        {
          v12 = v10;
          while ( 1 )
          {
            a2 = *v12;
            if ( *(_WORD *)(*v12 + 36) == 195 )
              break;
            if ( (__int64 *)v11 == ++v12 )
              goto LABEL_12;
          }
          if ( (__int64 *)v11 == v12 )
            goto LABEL_12;
LABEL_15:
          v13 = *v10;
          if ( *(_WORD *)(*v10 + 36) != 195 )
          {
            v14 = v10 + 1;
            do
              v13 = *v14++;
            while ( *(_WORD *)(v13 + 36) != 195 );
          }
          if ( !(unsigned __int8)sub_B8E180(v22 + 64) )
          {
            v19 = *(__int64 **)(v3 + 120);
            v20 = &v19[(unsigned int)sub_B76070(v3, a2, v15, v16)];
            while ( v20 != v19 )
            {
              v21 = *v19;
              a2 = *(unsigned int *)(v13 + 24);
              ++v19;
              sub_190F640(a1, a2, v3, v21, 0, 1);
              sub_18C3E40(a1);
            }
          }
          if ( v4 )
          {
            sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0xC64u, 0);
            sub_185AB80((__int64)v24, &v22);
            sub_15F7200(v24);
            sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), *(_DWORD *)(v3 + 24), 0x172Eu, 0);
            v23 = *(_QWORD *)(v3 + 40);
            sub_15894B0((__int64)v24, &v23);
            sub_15F7200(v24);
            return;
          }
          v4 = v3;
          v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v3 )
            return;
        }
      }
    }
  }
}
