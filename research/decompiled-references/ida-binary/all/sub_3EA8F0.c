__int64 __fastcall sub_3EA8F0(QT::QKeyEvent *a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  int *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _DWORD *v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  void *v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  int v16; // esi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int8 *v21; // rcx
  unsigned __int8 *v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rdx
  unsigned int v25; // ebx
  int v27; // r14d
  __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rax
  int v33; // [rsp+14h] [rbp-64h] BYREF
  void *v34; // [rsp+18h] [rbp-60h]
  __int64 v35; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-50h]
  char v37; // [rsp+30h] [rbp-48h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( !(_BYTE)byte_8D1268 && __cxa_guard_acquire(&byte_8D1268) )
  {
    __cxa_atexit((void (*)(void *))sub_3E9C40, &qword_8D1270, &off_85BC80);
    __cxa_guard_release(&byte_8D1268);
  }
  v3 = qword_8D1270;
  if ( qword_8D1270 && *(_QWORD *)(qword_8D1270 + 8) )
  {
LABEL_29:
    v14 = *(_QWORD *)(v3 + 16);
    v15 = *(_QWORD *)(v3 + 32);
    v16 = *((_DWORD *)a1 + 16);
    v17 = (0xD6E8FEB86659FD93LL * (*(_QWORD *)(v3 + 24) ^ v16 ^ ((*(_QWORD *)(v3 + 24) ^ (unsigned __int64)v16) >> 32))) >> 32;
    v18 = 144
        * (((v14 - 1)
          & (((0xD6E8FEB86659FD93LL
             * (v17
              ^ (0xD6E8FEB86659FD93LL
               * (*(_QWORD *)(v3 + 24) ^ v16 ^ ((*(_QWORD *)(v3 + 24) ^ (unsigned __int64)v16) >> 32))))) >> 32)
           ^ (0xD6E8FEB86659FD93LL
            * (v17
             ^ (0xD6E8FEB86659FD93LL
              * (*(_QWORD *)(v3 + 24) ^ v16 ^ ((*(_QWORD *)(v3 + 24) ^ (unsigned __int64)v16) >> 32))))))) >> 7);
    v19 = (unsigned __int8)(v14 - 1)
        & (unsigned __int8)(((0xD6E8FEB86659FD93LL
                            * (v17
                             ^ (0xD6E8FEB86659FD93LL
                              * (*(_QWORD *)(v3 + 24) ^ v16 ^ ((*(_QWORD *)(v3 + 24) ^ (unsigned __int64)v16) >> 32))))) >> 32)
                          ^ (-109
                           * (v17
                            ^ (-109
                             * (*(_BYTE *)(v3 + 24) ^ v16 ^ ((*(_QWORD *)(v3 + 24) ^ (unsigned __int64)v16) >> 32))))))
        & 0x7F;
    v20 = v15 + v18;
LABEL_30:
    v21 = (unsigned __int8 *)(v20 + 128);
LABEL_31:
    v22 = (unsigned __int8 *)(v20 + v19);
    while ( 1 )
    {
      v23 = *v22;
      if ( v23 == 255 )
        return 0;
      v24 = (_DWORD *)(*(_QWORD *)v21 + 8 * v23);
      if ( *v24 == v16 )
      {
        if ( !v24 )
          return 0;
        v25 = v24[1];
        if ( v25 - 96 <= 9 && (QT::QKeyEvent::modifiers(a1) & 0x20000000) == 0 )
          v25 -= 48;
        return v25;
      }
      if ( v21 == ++v22 )
      {
        v20 += 144;
        v21 += 144;
        v19 = 0;
        if ( 0x8E38E38E38E38E39LL * ((v20 - v15) >> 4) != v14 >> 7 )
          goto LABEL_31;
        v20 = v15;
        goto LABEL_30;
      }
    }
  }
  v4 = (int *)&unk_5EA360;
  do
  {
    v33 = *v4;
    if ( !v3 )
    {
      v34 = nullptr;
      goto LABEL_44;
    }
    if ( *(_DWORD *)v3 > 1u )
    {
      v34 = (void *)qword_8D1270;
      if ( qword_8D1270 )
      {
        if ( *(_DWORD *)qword_8D1270 != -1 )
          _InterlockedAdd((volatile signed __int32 *)qword_8D1270, 1u);
        v5 = (_QWORD *)qword_8D1270;
        if ( qword_8D1270 )
        {
          if ( *(_DWORD *)qword_8D1270 <= 1u )
          {
LABEL_13:
            sub_3EA580((__int64)&v35, v5, &v33);
            v6 = *(_QWORD *)(v35 + 32) + 144 * (v36 >> 7);
            v7 = (_DWORD *)(*(_QWORD *)(v6 + 128) + 8LL * *(unsigned __int8 *)(v6 + (v36 & 0x7F)));
            if ( !v37 )
              *v7 = v33;
            v7[1] = v4[1];
            if ( v34 )
            {
              if ( *(_DWORD *)v34 != -1 && !_InterlockedSub((volatile signed __int32 *)v34, 1u) )
              {
                v8 = v34;
                if ( v34 )
                {
                  v9 = *((_QWORD *)v34 + 4);
                  if ( v9 )
                  {
                    v10 = v9 + 144LL * *(_QWORD *)(v9 - 8);
                    if ( v9 == v10 )
                    {
                      v13 = 0;
                    }
                    else
                    {
                      do
                      {
                        v11 = v10;
                        v12 = *(void **)(v10 - 16);
                        v10 -= 144;
                        if ( v12 )
                          operator delete[](v12);
                      }
                      while ( v8[4] != v10 );
                      v13 = 144LL * *(_QWORD *)(v11 - 152);
                    }
                    operator delete[]((void *)(v10 - 8), v13 + 8);
                  }
                  operator delete(v8, 0x28u);
                }
              }
            }
            goto LABEL_27;
          }
LABEL_12:
          qword_8D1270 = (__int64)sub_3E9D00(v5, a2, a3);
          v5 = (_QWORD *)qword_8D1270;
          goto LABEL_13;
        }
      }
LABEL_44:
      v5 = nullptr;
      goto LABEL_12;
    }
    if ( *(_QWORD *)(qword_8D1270 + 8) < *(_QWORD *)(qword_8D1270 + 16) >> 1 )
    {
      sub_3EA580((__int64)&v35, (_QWORD *)qword_8D1270, &v33);
      v30 = *(_QWORD *)(v35 + 32) + 144 * (v36 >> 7);
      v31 = (_DWORD *)(*(_QWORD *)(v30 + 128) + 8LL * *(unsigned __int8 *)(v30 + (v36 & 0x7F)));
      if ( !v37 )
        *v31 = v33;
      v31[1] = v4[1];
    }
    else
    {
      v27 = v4[1];
      sub_3EA580((__int64)&v35, (_QWORD *)qword_8D1270, &v33);
      v28 = *(_QWORD *)(v35 + 32) + 144 * (v36 >> 7);
      v29 = (_DWORD *)(*(_QWORD *)(v28 + 128) + 8LL * *(unsigned __int8 *)(v28 + (v36 & 0x7F)));
      if ( !v37 )
        *v29 = v33;
      v29[1] = v27;
    }
LABEL_27:
    v4 += 2;
    v3 = qword_8D1270;
  }
  while ( v4 != (int *)&unk_5EA820 );
  if ( qword_8D1270 )
    goto LABEL_29;
  return 0;
}
