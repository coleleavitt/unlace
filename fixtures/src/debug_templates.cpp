template <typename T>
struct Box {
    T value;
};

template <typename T, int N>
struct Array {
    T data[N];
};

template <typename T>
T addT(T a, T b) {
    return a + b;
}

Box<int> make_box(int x) {
    Box<int> b{x};
    return b;
}

int use_box(Box<int> b) {
    return b.value;
}

Array<long, 4> make_array(long x) {
    Array<long, 4> a{};
    a.data[0] = x;
    return a;
}

int call_add(int x) {
    return addT<int>(x, 3);
}

int main() {
    return use_box(make_box(7)) + call_add(5) + static_cast<int>(make_array(9).data[0]);
}
