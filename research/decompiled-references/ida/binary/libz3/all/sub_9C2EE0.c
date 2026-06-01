__int64 __fastcall sub_9C2EE0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  int *v12; // r13
  int *v13; // r15
  int v14; // ebx
  int *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rax
  int *v22; // r13
  int *v23; // r14
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  void *v27; // r15
  __int64 i; // rcx
  __int64 v29; // rax
  int *v31; // rax
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r12
  _DWORD *v35; // r13
  int v36; // eax
  __int64 v37; // r12
  int *v38; // rax
  int *v39; // rax
  __int64 v40; // [rsp+0h] [rbp-78h]
  int *v41; // [rsp+0h] [rbp-78h]
  _DWORD *v42; // [rsp+0h] [rbp-78h]
  int v43; // [rsp+0h] [rbp-78h]
  __int64 v44; // [rsp+8h] [rbp-70h]
  int v45; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v46; // [rsp+20h] [rbp-58h] BYREF
  __int64 v47; // [rsp+28h] [rbp-50h]
  __int64 v48; // [rsp+30h] [rbp-48h] BYREF
  __int64 v49; // [rsp+38h] [rbp-40h]

  if ( (a2 == -1 || ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * a2 + 3) >> 4) & 3) != 2)
    && (a3 == -1 || ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * a3 + 3) >> 4) & 3) != 2) )
  {
    v6 = *(_QWORD *)(a1 + 1416);
    if ( v6 )
    {
      v7 = *(unsigned int *)(v6 - 4);
      if ( (_DWORD)v7 )
      {
        v40 = v6 + 40 * v7;
        do
        {
          v8 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v6);
          v9 = v6 + 16;
          v6 += 40;
          sub_182CBA0(v8, v9);
        }
        while ( v6 != v40 );
        v6 = *(_QWORD *)(a1 + 1416);
      }
      *(_DWORD *)(v6 - 4) = 0;
    }
    v10 = *(_QWORD *)(a1 + 656);
    *(_DWORD *)(a1 + 1424) = 0;
    *(_QWORD *)(a1 + 1428) = -1;
    v11 = v10 + 4LL * a2;
    if ( a2 == -1 || (*(_BYTE *)(v11 + 3) & 0x30) != 0 )
    {
      v12 = *(int **)(*(_QWORD *)(a1 + 632) + 24LL * (*(_DWORD *)v11 & 0xFFFFFFF));
      if ( v12 )
      {
        v13 = &v12[10 * *(v12 - 1)];
        if ( v13 != v12 )
        {
          do
          {
            v14 = v12[8];
            if ( a2 != v14 && v14 != -1 )
            {
              v15 = sub_9C25B0(a1 + 1416, &v46);
              v15[8] = v14;
              v41 = v15;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v15, v12);
              sub_1831620(qword_1C7F2C0, v41);
            }
            v12 += 10;
          }
          while ( v12 != v13 );
          v10 = *(_QWORD *)(a1 + 656);
          v6 = *(_QWORD *)(a1 + 1416);
        }
      }
    }
    else
    {
      v46 = 1;
      v47 = 0;
      v48 = 1;
      v49 = 0;
      sub_182CBA0(qword_1C7F2C0, &v48);
      BYTE4(v48) &= ~1u;
      LODWORD(v48) = 1;
      v38 = sub_9C25B0(a1 + 1416, &v45);
      v38[8] = a2;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v38, (int *)&v46);
      sub_25A130((char *)&v46);
      v10 = *(_QWORD *)(a1 + 656);
      v6 = *(_QWORD *)(a1 + 1416);
    }
    if ( v6 )
    {
      v16 = v6 + 40LL * *(unsigned int *)(v6 - 4);
      if ( v16 != v6 )
      {
        v17 = v6;
        v18 = 0;
        do
        {
          v19 = *(unsigned int *)(v17 + 32);
          if ( (_DWORD)v19 != -1 )
            *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * v19) = v18;
          v17 += 40;
          ++v18;
        }
        while ( v16 != v17 );
      }
    }
    v20 = a3;
    v21 = v10 + 4LL * a3;
    if ( a3 == -1 || (*(_BYTE *)(v21 + 3) & 0x30) != 0 )
    {
      v22 = *(int **)(*(_QWORD *)(a1 + 632) + 24LL * (*(_DWORD *)v21 & 0xFFFFFFF));
      if ( v22 )
      {
        v23 = &v22[10 * *(v22 - 1)];
        if ( v23 != v22 )
        {
          do
          {
            v24 = v22[8];
            if ( v24 != -1 && a3 != v24 )
            {
              v46 = 0;
              v47 = 0;
              v48 = 1;
              v49 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v46, v22);
              sub_1831620(qword_1C7F2C0, &v46);
              v25 = *(unsigned int *)(*(_QWORD *)(a1 + 720) + 4LL * (unsigned int)v22[8]);
              if ( (_DWORD)v25 == -1 )
              {
                v43 = v22[8];
                v31 = sub_9C25B0(a1 + 1416, &v45);
                v32 = qword_1C7F2C0;
                v31[8] = v43;
                sub_27B950((__int64)v32, (__int64)v31, (int *)&v46);
              }
              else
              {
                v44 = 40 * v25;
                v42 = (_DWORD *)(*(_QWORD *)(a1 + 1416) + 40 * v25);
                sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v42, (__int64)&v46, (__int64)v42);
                if ( !*v42 )
                {
                  v26 = *(_QWORD *)(a1 + 1416) + v44;
                  *(_DWORD *)(v26 + 36) = *(_DWORD *)(a1 + 1432);
                  *(_DWORD *)(v26 + 32) = -1;
                  --*(_DWORD *)(a1 + 1424);
                }
                *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4LL * (unsigned int)v22[8]) = -1;
              }
              v27 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v46);
              sub_182CBA0(v27, &v48);
            }
            v22 += 10;
          }
          while ( v22 != v23 );
          v6 = *(_QWORD *)(a1 + 1416);
        }
      }
    }
    else
    {
      v33 = *(unsigned int *)(*(_QWORD *)(a1 + 720) + 4LL * a3);
      if ( (_DWORD)v33 == -1 )
      {
        v47 = 0;
        v46 = 0xFFFFFFFFLL;
        v48 = 1;
        v49 = 0;
        sub_182CBA0(qword_1C7F2C0, &v48);
        BYTE4(v48) &= ~1u;
        LODWORD(v48) = 1;
        v39 = sub_9C25B0(a1 + 1416, &v45);
        v39[8] = a3;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v39, (int *)&v46);
        sub_25A130((char *)&v46);
        v6 = *(_QWORD *)(a1 + 1416);
      }
      else
      {
        v47 = 0;
        v34 = 40 * v33;
        v46 = 0xFFFFFFFFLL;
        v48 = 1;
        v35 = (_DWORD *)(v6 + 40 * v33);
        v49 = 0;
        sub_182CBA0(qword_1C7F2C0, &v48);
        BYTE4(v48) &= ~1u;
        LODWORD(v48) = 1;
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v35, (__int64)&v46, (__int64)v35);
        sub_25A130((char *)&v46);
        v6 = *(_QWORD *)(a1 + 1416);
        if ( !*v35 )
        {
          v36 = *(_DWORD *)(a1 + 1432);
          v37 = v6 + v34;
          *(_DWORD *)(v37 + 32) = -1;
          *(_DWORD *)(v37 + 36) = v36;
          --*(_DWORD *)(a1 + 1424);
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * v20) = -1;
      }
    }
    if ( v6 )
    {
      for ( i = v6 + 40LL * *(unsigned int *)(v6 - 4); i != v6; v6 += 40 )
      {
        v29 = *(unsigned int *)(v6 + 32);
        if ( (_DWORD)v29 != -1 )
          *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * v29) = -1;
      }
    }
  }
  return 0;
}

