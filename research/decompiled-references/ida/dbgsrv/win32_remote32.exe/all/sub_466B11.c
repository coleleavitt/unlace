/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466B11
// Address: 0x00466B11

//----- (00466B11) --------------------------------------------------------
_DWORD *__usercall sub_466B11@<eax>(
        PEXCEPTION_RECORD a1@<ebx>,
        int a2@<esi>,
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a4,
        int a5,
        int a6,
        int *a7,
        char a8,
        int a9,
        struct EHRegistrationNode *TargetFrame)
{
  int *v10; // edi
  int v11; // eax
  int v12; // ecx
  _DWORD *result; // eax
  int v14; // edx
  int *v15; // edx
  int v16; // eax
  int v17; // ecx
  const void *v18; // esi
  int v19; // ecx
  ULONG_PTR v20; // edx
  int *v21; // eax
  int v22; // esi
  int *v23; // eax
  int *v24; // edi
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  struct EHRegistrationNode *v27; // eax
  int v28; // eax
  int *v29; // [esp-4h] [ebp-74h]
  int v30; // [esp+0h] [ebp-70h]
  int v31[5]; // [esp+Ch] [ebp-64h] BYREF
  int v32[4]; // [esp+20h] [ebp-50h] BYREF
  int v33; // [esp+30h] [ebp-40h] BYREF
  _DWORD v34[2]; // [esp+34h] [ebp-3Ch] BYREF
  unsigned int v35; // [esp+3Ch] [ebp-34h]
  _DWORD v36[2]; // [esp+40h] [ebp-30h] BYREF
  int v37; // [esp+48h] [ebp-28h]
  int v38; // [esp+4Ch] [ebp-24h]
  int *v39; // [esp+50h] [ebp-20h]
  int v40; // [esp+54h] [ebp-1Ch]
  int v41; // [esp+58h] [ebp-18h]
  int v42; // [esp+5Ch] [ebp-14h]
  int v43; // [esp+60h] [ebp-10h]
  int *v44; // [esp+64h] [ebp-Ch]
  int v45; // [esp+68h] [ebp-8h]
  int v46; // [esp+6Ch] [ebp-4h]

  v10 = a7;
  v43 = 0;
  LOBYTE(v41) = 0;
  v11 = sub_467CCC((int)a4, a6, (int)a7);
  v12 = v11;
  v45 = v11;
  if ( v11 < -1 || v11 >= a7[1] )
    goto LABEL_68;
  a1 = ExceptionRecord;
  if ( ExceptionRecord->ExceptionCode == -529697949
    && ExceptionRecord->NumberParameters == 3
    && (ExceptionRecord->ExceptionInformation[0] == 429065504
     || ExceptionRecord->ExceptionInformation[0] == 429065505
     || ExceptionRecord->ExceptionInformation[0] == 429065506)
    && (a2 = 0, !ExceptionRecord->ExceptionInformation[2]) )
  {
    result = sub_4667C5((int)ExceptionRecord, a7, 0);
    if ( !result[4] )
      return result;
    a1 = *((PEXCEPTION_RECORD *)sub_4667C5((int)ExceptionRecord, a7, 0) + 4);
    LOBYTE(v41) = 1;
    v46 = *((_DWORD *)sub_4667C5((int)a1, a7, 0) + 5);
    if ( !a1
      || a1->ExceptionCode == -529697949
      && a1->NumberParameters == 3
      && (a1->ExceptionInformation[0] == 429065504
       || a1->ExceptionInformation[0] == 429065505
       || a1->ExceptionInformation[0] == 429065506)
      && !a1->ExceptionInformation[2] )
    {
      goto LABEL_68;
    }
    if ( *((_DWORD *)sub_4667C5((int)a1, a7, 0) + 7) )
    {
      v44 = *((int **)sub_4667C5((int)a1, a7, 0) + 7);
      v29 = v44;
      *((_DWORD *)sub_4667C5((int)a1, a7, 0) + 7) = 0;
      if ( !sub_46753C((int)a1, a7, (int)a1, v29) )
      {
        v10 = v44;
        if ( *v44 > 0 )
        {
          while ( !sub_4671BC(*(void **)(a2 + v44[1] + 4), (int)&std::bad_exception `RTTI Type Descriptor') )
          {
            a2 += 16;
            if ( ++v43 >= *v44 )
              goto LABEL_63;
          }
          sub_463D5D(a1);
          sub_46719E(v34);
          sub_464D00(v34, &_TI2_AVbad_exception_std__);
LABEL_65:
          *((_DWORD *)sub_4667C5((int)a1, v10, a2) + 4) = a1;
          v26 = sub_4667C5((int)a1, v10, a2);
          v26[5] = v46;
          v27 = a4;
          if ( TargetFrame )
            v27 = TargetFrame;
          sub_464120((struct _EXCEPTION_REGISTRATION_RECORD **)a1, v27, a1);
          sub_467436((int)a1, v10, (int)a4, a6, (int)v10);
          v28 = sub_4675F9((int)v10);
          sub_4673AA((int)a1, v10, a2, v28, v30);
        }
LABEL_63:
        sub_477B21((int)a1, v10);
      }
    }
    v14 = v46;
    v12 = v45;
  }
  else
  {
    v14 = a5;
    v46 = a5;
  }
  v36[0] = a7;
  v36[1] = 0;
  if ( a1->ExceptionCode == -529697949
    && a1->NumberParameters == 3
    && (a1->ExceptionInformation[0] == 429065504
     || a1->ExceptionInformation[0] == 429065505
     || a1->ExceptionInformation[0] == 429065506) )
  {
    if ( a7[3] )
    {
      sub_463F22(&v33, (int)v36, v12, a6, a7, a9);
      v15 = (int *)v34[0];
      v16 = v33;
      v37 = v33;
      v44 = (int *)v34[0];
      if ( v34[0] < v35 )
      {
        v17 = 20 * v34[0];
        v40 = 20 * v34[0];
        do
        {
          v18 = (const void *)(v17 + *(_DWORD *)(*(_DWORD *)v16 + 16));
          qmemcpy(v31, v18, sizeof(v31));
          a2 = (int)v18 + 20;
          if ( v31[0] <= v45 && v45 <= v31[1] )
          {
            v19 = 0;
            v43 = 0;
            if ( v31[3] )
            {
              v20 = a1->ExceptionInformation[2];
              v21 = *(int **)(v20 + 12);
              v22 = *v21;
              v39 = v21 + 1;
              v23 = (int *)v31[4];
              v38 = v22;
              v42 = v31[4];
              while ( 1 )
              {
                v32[0] = *v23;
                v32[1] = v23[1];
                v32[2] = v23[2];
                v32[3] = v23[3];
                a2 = v38;
                v24 = v39;
                if ( v38 > 0 )
                  break;
LABEL_41:
                ++v19;
                v23 += 4;
                v43 = v19;
                v42 = (int)v23;
                if ( v19 == v31[3] )
                  goto LABEL_44;
              }
              while ( !sub_466FEA((int)v32, *v24, (_BYTE *)v20) )
              {
                v20 = a1->ExceptionInformation[2];
                --a2;
                ++v24;
                if ( a2 <= 0 )
                {
                  v19 = v43;
                  v23 = (int *)v42;
                  goto LABEL_41;
                }
              }
              sub_466A90(a1, a4, v46, a6, (int)a7, v32, *v24, v31, a9, TargetFrame);
LABEL_44:
              v15 = v44;
            }
          }
          v15 = (int *)((char *)v15 + 1);
          v16 = v37;
          v17 = v40 + 20;
          v44 = v15;
          v40 += 20;
        }
        while ( (unsigned int)v15 < v35 );
        v10 = a7;
      }
    }
    if ( a8 )
      sub_463D5D(a1);
    if ( (*v10 & 0x1FFFFFFFu) >= 0x19930521 )
    {
      if ( v10[7] )
      {
        if ( (v10[8] & 4) != 0 )
        {
LABEL_55:
          *((_DWORD *)sub_4667C5((int)a1, v10, a2) + 4) = a1;
          v25 = sub_4667C5((int)a1, v10, a2);
          v25[5] = v46;
          goto LABEL_63;
        }
        if ( !sub_46753C((int)a1, v10, (int)a1, (int *)v10[7]) )
          goto LABEL_65;
      }
      else if ( (v10[8] & 4) != 0 && !a9 )
      {
        goto LABEL_55;
      }
    }
  }
  else if ( a7[3] )
  {
    if ( a8 )
      goto LABEL_68;
    sub_466EB4(a7, a2, a1, a4, v14, a6, a7, v12, a9, TargetFrame);
  }
  result = sub_4667C5((int)a1, v10, a2);
  if ( result[7] )
LABEL_68:
    sub_467F38((int)a1, v10, a2);
  return result;
}
// 466EA9: variable 'v30' is possibly undefined
// 4B283C: using guessed type __TI_flags _TI2_AVbad_exception_std__;
